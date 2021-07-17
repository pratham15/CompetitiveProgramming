#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> dp(n+1, 0);
    for(int i=  1; i <= n; ++i){
        for(int j = i+i; j<=n; j+=i) dp[j]++;
    }
    int s = dp[0] = 1;
    const int mod = 998244353;
    for(int i = 1; i <=n; ++i){
        dp [i] = dp[i] + s;
        if(dp[i] >= mod) dp[i] -= mod;
        s = s + dp[i];
        if(s >= mod) s-= mod;
    }
    cout << dp[n] << '\n';
}

