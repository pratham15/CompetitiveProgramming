#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    vector<int> dp[n+1];
    for(int i= 0; i <=n; ++i) dp[i].resize(m+1);
    for(int i = 0; i<= n; ++i){
        for(int j = 0; j<= m; ++j){
            if(i == j) dp[i][j] = 0;
            else{
                int k = 1; 
                dp[i][j] = 1e9;
                for(; k < i; ++k)
                    dp[i][j] = min(dp[i][j], dp[k][j] + dp[i-k][j]+ 1);
                for(k = 1; k < j; ++k)
                    dp[i][j] = min(dp[i][j], dp[i][k] + dp[i][j-k] + 1);
            }
        }
    }
    cout << dp[n][m] << '\n';
}


