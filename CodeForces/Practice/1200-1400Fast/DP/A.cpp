#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin >> s;
    int N = s.size();
    for(int i = 0; i < N; ++i) if(s[i] == 'm' || s[i] == 'w') {cout << "0"; return 0;}
    vector<int> dp(N+1, 1);
    //aaaaagpg
    //
    for(int i = 2; i<= N; ++i) {
        dp[i] = dp[i-1];
        if(s[i-1] == s[i-2] && (s[i-1] == 'n') || s[i-1] == 'u') dp[i] = (dp[i] + dp[i-2]) % mod;
    }
    cout << dp[N];
}


