#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    int s = n * (n+1);
    s/=2;
    if(s%2==1) return cout << 0, 0;
    vector<int> dp(s+1);
    int curSum = 0;
    for(int i = 1; i <= n; ++i) {
        curSum += i;
        for(int j = s; j >= 0; j--){ 
            if(dp[j] > 0) dp[i+j] =(dp[i+j] +  dp[j]) % mod;
            if(j==0) dp[i] += 1;
        }
    }
    cout << dp[s] % mod;
}
