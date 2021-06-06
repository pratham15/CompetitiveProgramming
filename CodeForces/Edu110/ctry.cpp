#include<bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        int n = s.size();
        vector<array<int, 2>> dp(n);
        ll ans = 0;
        for (int i = 0; i < n; ++i) {
            if (s[i] != '0') dp[i][1] = 1 + (i > 0 ? dp[i-1][0] : 0);
            if (s[i] != '1') dp[i][0] = 1 + (i > 0 ? dp[i-1][1] : 0);
            ans += max(dp[i][0], dp[i][1]);
        }
        cout << ans << '\n';
        for(auto [x, y] : dp) cout <<x  << ' ' << y <<'\n';
    }
}
