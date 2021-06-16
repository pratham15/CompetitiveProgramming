#include<bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
#define int int64_t
void solve(){
    int l, r;
    cin >> l >> r;
    auto x = [] (int y){
        int ans = 0, decimal = 1;
        for(int i = 0; i <= 9; ++i){
            ans += y / decimal;
            decimal *= 10;
        }
        return ans;
    };
    cout << x(r) - x(l) << '\n';
    
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    t = 1;
    cin >> t;
    while(t--) solve();
}

