#include<bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
 
void solve(){
    int n, l, r;
    cin >> n >> l >> r;
    multiset<int> left, right;
    while(l--) {
        int x;
        cin >> x;
        left.insert(x);
    }
    while(r--){
        int x;
        cin >> x;
        if(left.count(x) > 0) {
            left.erase(left.find(x));
            continue;
        }
        right.insert(x);
    }
    if(left.size() == right.size()) {
        cout << left.size() << '\n';
        return;
    }
    int64_t ans = 0;
    auto er = [&] (multiset<int> &modify, multiset<int> &check) -> void{
        while(modify.size() > check.size()){
            bool change = false;
            for(auto x : modify){
                if(modify.count(x) > 1) {
                    ans++;
                    modify.erase(modify.find(x));
                    modify.erase(modify.find(x));
                    change = true;
                    break;
                }
            }
            if(change == false) break;
        }
    };
    if(left.size() > right.size()) er(left, right);
    else er(right, left);
    if(right.size() == left.size()) cout << ans + right.size() << '\n';
    else cout << ans + max(left.size(), right.size()) << '\n';
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    t = 1;
    cin >> t;
    while(t--) solve();
}
