#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    const int M = 2e5 + 15;
    vector<int> dp(M, 0);
    for(int i = 0; i < 9; ++i) dp[i] = 1;
    for(int i = 9; i < 19; ++i) dp[i] = 2;
    dp[19] = 3;
    for(int i = 20; i < M; ++i) dp[i] = (dp[i-9] + dp[i-10]) % mod;
 
    int t;
    cin >> t;
    while(t--) {
        int a, b;
        cin >> a >> b;
        int cnt = 0;
        while( a > 0) {
            int k = a % 10;
            cnt += dp[b+k]; 
            cnt %= mod;
            a/=10;
        }
        cout << cnt << '\n';
    }
}
