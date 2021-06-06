#include<bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
    int n, k;
    cin >> n >> k;
    vector<vector<int>> a(n, vector<int> (n));
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < n; ++j)
            cin >> a[i][j];
    vector<int> ans;
    vector<int> c;
    for(int i = 0; i <= n-k; ++i){
        c.clear();
        for(int j = 
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();
}

