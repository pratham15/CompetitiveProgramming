#include<bits/stdc++.h>
using namespace std;
void dfs (int c, vector<int> adj[], vector<bool> &trav) {
    if(trav[c]) return;
    trav[c] = 1;
    for(auto x : adj[c]){
        if(trav[x]) continue;
        dfs(x, adj, trav);
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    vector<int> adj[n];
    for(int i = 0; i < m; ++i){
        int a, b;
        cin >> a >> b;
        --a, --b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    vector<bool> trav(n, false);
    vector<int> ans;
    for(int i = 0; i < n; ++i) {
        if(trav[i] == false) ans.push_back(i+1), dfs(i, adj, trav);
    }
    cout << ans.size() - 1 << '\n';
    for(int i = 1; i < ans.size(); ++i) cout << ans[i-1] << ' ' << ans[i] << '\n';
}

