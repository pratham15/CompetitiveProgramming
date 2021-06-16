#include<bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

multiset<int> h, l;
int64_t  hi = 0, lo = 0;
void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(auto &x : a) cin >> x;
    auto ins = [&] (int val){
        auto it = prev(l.end());
        if(*it < val) {
            h.insert(val);
            hi += val;
            if(h.size() > k/2){
                auto f = h.begin();
                hi -= *f;
                lo += *f;
                l.insert(*f);
                h.erase(f);
            }
        }
        else {
            l.insert(val);
            lo += val;
            if(l.size() > (k+1)/2){
                auto f = l.rbegin();
                lo-=*f;
                hi += *f;
                h.insert(*f);
                l.erase(l.find(*f));
            }
        }
    };
    auto er = [&] (int val) {
        if(h.count(val) != 0) h.erase(h.find(val)), hi -= val;
        else l.find(l.erase(val)), lo -= val;
        if(l.empty()) {
            auto it = h.begin();
            hi -= *it;
            lo += *it;
            l.insert(*it);
            h.erase(it);
        }
    };
    l.insert(a[0]);
    lo += a[0];
    for(int i = 1; i < k; ++i)ins(a[i]); 
    cout << hi - lo+ (k%2 == 0 ? 0 : *l.rbegin()) << ' ';
    for(int i = k; i<n; ++i){
        if(k==1) { ins(a[i]); er(a[i-k]); }
        else { er(a[i-k]); ins(a[i]);}
        cout << hi - lo + (k%2 == 0 ? 0 : *l.rbegin()) << ' '; 
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

