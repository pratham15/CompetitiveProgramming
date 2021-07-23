#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n; cin >> n;
    vector<int> l(n), r(n);
    for(auto &x : l) cin >> x;
    for(auto &x : r) cin >> x;
    vector<pair<int, int>> dp(n);
    if(n==1) {cout << max(l[0], r[0]); return 0;}
    if(n==2) {cout << max(l[0] + r[1], l[1] + r[0]); return 0;}
    for(int i = 0; i < n; ++i) {
        if(i==0) dp[i].first = l[0], dp[i].second = r[0];
        else if(i == 1) dp[i].first = dp[i-1].second + l[i], dp[i].second = dp[i-1].first + r[i];
        else {
            dp[i].first = max(dp[i-1].second + l[i], dp[i-2].second + l[i]);
            dp[i].second = max(dp[i-1].first + r[i], dp[i-2].first + r[i]);
        }
    }
    cout << max(dp[n-1].first, dp[n-1].second);
}
