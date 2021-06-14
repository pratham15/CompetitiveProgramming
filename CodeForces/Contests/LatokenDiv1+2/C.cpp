#include<bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

const int mod = 1e9+7;
void dfs(int x, auto &visited, auto &ind){
    if(visited[x]) return;
    visited[x] = true;
    x = ind[x];
    dfs(x, visited, ind);
}

void solve(){
    int64_t ans = 1;
    int n;
    cin >> n;
    vector<bool> visited(n, false);
    vector<array<int, 2>> a(n);
    vector<int> ind(n);
    vector<int> mp(n+1);
    for(int i = 0; i < n; ++i) cin >> a[i][0];
    for(int i = 0; i < n; ++i) cin >> a[i][1];
    for(int i = 0; i < n; ++i) mp[a[i][0]] = i;
    for(int i = 0; i < n; ++i) ind[i] = mp[a[i][1]];
    for(int i = 0; i < n; ++i){
        if(visited[i]) continue;
        int inl = i;
        dfs(inl , visited, ind);
        ans = ans * 2 % mod;
    }
    cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    t = 1;
    cin >> t;
    while(t--) solve();
}

