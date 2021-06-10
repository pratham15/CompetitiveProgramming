#include<bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
vector<int> a, dp, ans;
vector<vector<int>> graph;

void dfs(int u, int p = -1){
    dp[u] = a[u];
    for(auto v : graph[u]){
        if(v==p) continue;
        dfs(v, u);
        dp[u] += max(0, dp[v]);
    }
}

void sDFS(int u, int p = -1){
    ans[u] = dp[u];
    for(auto v : graph[u]){
        if(v==p) continue;
        dp[u] -= max(0, dp[v]);
        dp[v] += max(0, dp[u]);
        sDFS(v, u);
        dp[v] -= max(0, dp[u]);
        dp[u] += max(0, dp[v]);
    }
}

void solve(){ 
    int n;
    cin >> n;
    a = dp = ans = vector<int> (n);
    for(auto &x : a) {
        cin >> x;
        if(x == 0) x--;
    }
    graph = vector<vector<int>> (n);
    for(int i = 0; i < n-1; ++i){
        int a, b;
        cin >> a >> b;
        a--, b--;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    dfs(0);
    sDFS(0);
    for(auto x : ans) cout << x << ' '; 
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();
}

