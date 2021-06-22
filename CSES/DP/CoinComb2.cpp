#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
const int N = 1e6+10;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, x;
    cin >> n >> x;
    vector<int> coins(n);
    for(auto &x : coins) cin >> x;
    vector<vector<int>> a(n+1, vector<int>(x+1, 0));
    a[0][0] = 1;
    for(int i = 1; i <= n; ++i){
        for(int j = 0; j <= x; ++j){
            a[i][j] = a[i-1][j];
            if(j-coins[i-1] >= 0) (a[i][j] += a[i][j-coins[i-1]]) %= MOD;
        }
    }
    cout << a[n][x] << '\n';
}

