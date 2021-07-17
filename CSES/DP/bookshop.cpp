#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+20;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, x;
    cin >> n >> x;
    vector<pair<int,int>> pages(n);
    vector<int> dp(N, 0);
    for(auto &x : pages) cin >> x.first;
    for(auto &x : pages) cin >> x.second;
    int sum = 0;
    int ans = 0;
    for(auto books : pages) {
        sum += books.first;
        sum = min(sum, x);
        for(int j = sum; j>=0; --j){
            if(j == 0) {
                dp[books.first] = max(dp[books.first], books.second);
                continue;
            }
            if(j >= books.first) {
                if(dp[j-books.first])
                    dp[j] = max(dp[j], dp[j-books.first] + books.second);
            }
            ans = max(ans, dp[j]);
        } 
    }
    cout << ans << '\n';
}

