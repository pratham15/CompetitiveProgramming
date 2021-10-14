#include<bits/stdc++.h>
using namespace std;

#define int int64_t
const int M = 998244353;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int ans = 1, n; cin >> n;
        vector<int> a(n); for(auto &x : a) cin >> x;

        int mx = *max_element(a.begin(), a.end());
        int cnt = count(a.begin(), a.end(), mx);
        int cnt2 = 1, b = 1;
        if(cnt == 1) 
           cnt2 = count(a.begin(), a.end(), mx-1) + 1;
        else b = 0;
        for(int i = 1; i <= n; ++i) {
            if(i == cnt2) ans *= cnt2 - b;
            else ans *= i;
            ans %= M;
        }
        cout << ans << '\n';
                
    }
}

