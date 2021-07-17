#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> dp(3,0);
    for(int i= 0; i < n; ++i){
        vector<int> newDp(3,0), a(3);
        for(int i = 0; i < 3; ++i) cin >> a[i];
        for(int i = 0; i < 3; ++i)
            for(int j = 0; j < 3; ++j)
                if(j != i) {
                    newDp[j] = max(newDp[j], dp[i] + a[j]); 
                }
        for(int i = 0; i < 3; ++i){
            dp[i] = newDp[i];
        }
    }
    cout << max({dp[0], dp[1], dp[2]}) << '\n';
}

