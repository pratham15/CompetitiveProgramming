#include<bits/stdc++.h>
using namespace std;
#define int int64_t
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    vector<int> dp(n+1);
    dp[1] = 1;
    int64_t cur = 1;
    for(int i = 2; i <= n; ++i) {
        int x = sqrt(i);
        int y = ceil(sqrt(i));

        for(int j = 2; j<= x; ++j) 
            dp[i] += dp[i/j];

        for(int j = 2; j <= y; ++j) 
            dp[i] +=dp[j] * (n/(j-1) - (n/j + 1));
        
        (dp[i] += cur) %= m;
        (cur += dp[i]) %= m;

    }

    for(auto &X : dp) cout << X << ' ';

}
/*
1, 2, 3, 4, 5

*/
