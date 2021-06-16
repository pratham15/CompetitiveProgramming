#include<bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
 
void solve(){
    int n, k;
    cin >> n>> k;
    vector<int> a(n);
    for(auto &x : a) cin >> x;
    multiset<int> l, h;
    l.insert(a[0]);
    auto ins = [&] (int val) {
        auto it = prev(l.end());
        if(*it < val) {
            h.insert(val);
            if(h.size() > k/2){
                l.insert(*h.begin());
                h.erase(h.begin());
            }
        }
        else {
            l.insert(val);
            if(l.size() > (k+1)/2){
                h.insert(*prev(l.end()));
                l.erase(prev(l.end()));
            }
        }
    };
    auto del = [&](int val) -> void {
        if(h.find(val) != h.end()) h.erase(h.find(val));
        else l.erase(l.find(val));
        if(l.empty()) {
            l.insert(*h.begin());
            h.erase(h.begin());
        }
    };
    for(int i = 1; i < k; ++i) ins(a[i]);
    cout << *prev(l.end()) << ' ';
    for(int i = k; i < n; ++i){
        if( k == 1) {
            ins(a[i]);
            del(a[i-k]);
        }
        else {
            del(a[i-k]);
            ins(a[i]);
        }
        cout << *prev(l.end()) << ' ' ;
    }
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();
}
