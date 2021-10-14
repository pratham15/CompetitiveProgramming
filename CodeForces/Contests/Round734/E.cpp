#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while(T--){
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for(auto &x : a) cin >> x;
        vector<vector<int>> dp(n+1, vector<int>(n+1,0));
        for(int i = 0; i < n; ++i) {
            for(int j = 0; j <= i; ++j){
                dp[i+1][j]=max(dp[i+1][j], dp[i][j]);
                dp[i+1][j+1] = max(dp[i+1][j+1], dp[i][j] + (a[i] == j+1));
            }
        }
        int ans = -1;
        for(int i = n; i >= 0; --i) {
            if(dp[n][i]>=k) {
                ans = n-i;
                    break;
            }
        }
        cout << ans << '\n';
    }
}

