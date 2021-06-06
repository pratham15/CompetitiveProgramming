#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
void solve(){
   int n, m;
   cin >> n >> m;
   vector<int> a(n);
   vector<vector<int>> dp(n, vector<int>(m+1, 0));
   for(auto &x : a) cin >> x;
   if(a[0] == 0) for(auto &x : dp[0]) x = 1;
   else dp[0][a[0]] = 1;
   for(int i = 1; i < n; ++i){
       if(a[i] == 0){
           for(int j = 1; j<=m; ++j){
               for(int k : {j-1, j, j+1})
                   if(k>=1 && k<=m)
                       dp[i][j] = (dp[i][j] + dp[i-1][k]) % mod;
           }
       }
       else for(int k : {a[i]-1, a[i], a[i]+1})
           if(k>=1 && k <= m)
               dp[i][a[i]] = (dp[i][a[i]] + dp[i-1][k]) % mod;
   }
   int ans = 0;
   for(int i = 1; i <=m; ++i){
       ans = (ans + dp[n-1][i]) %mod;
   }
   cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();
}

