#include<bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
    int n, h, r, l;
    cin >> n >> h >> l >> r;
    vector<int> a(n); for(auto &x : a) cin >> x;
    int currentTime = 0;
    auto check = [](int t, int l, int r){
        return l <= t && r >= t; 
    };
    vector<vector<int>>  dp(n+1, vector<int>(n+1, -1));
    dp[0][0] = 0;
    for(int i = 0; i < n; ++i){
        currentTime += a[i];
        for(int j= 0;j <= n; ++j){
            dp[i+1][j] = max(dp[i+1][j], dp[i][j] + check((currentTime - j) % h, l, r));
            if( j < n ) dp[i+1][j+1] = max(dp[i+1][j+1], dp[i][j] + check((currentTime - 1 - j) % h, l, r));
        }
    }
    cout << *max_element(dp[n].begin(), dp[n].end());
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();
}

