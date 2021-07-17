#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    const int N = 1e6 + 10;
    const int mod = 1e9 + 7;
    int dp[2][N];
    int t;
    cin >> t;
    dp[1][1] = 1;
    dp[0][1] = 1;
    for(int i = 2; i<= N; ++i){
        dp[1][i] = 1LL * dp[1][i-1] * 4 % mod + dp[0][i-1];
        dp[0][i] = 1LL * dp[0][i-1] * 2 % mod + dp[1][i-1];
        dp[1][i] %= mod;
        dp[0][i] %= mod;
    }
    
    while(t--) {
        int n;
        cin >> n;
        cout << (dp[0][n] + dp[1][n]) % mod << '\n';       
    }

}

