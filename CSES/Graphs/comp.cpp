#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
vector<int> adj[N];
vector<int> visited(N, -1);
vector<int> parent(N, 0);
void dfs(int c, int p = 0, int i = 1){
    if(visited[c] != -1){
        if(visited[c] < i) return;
    }
    visited[c]= i;
    parent[c] = p;
    for(auto x : adj[c]){
        dfs(x, c, i+1);
    }
}
int main(){
    freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    while(m--){
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    dfs(1);
    if(visited[n] == -1) {
        cout << "IMPOSSIBLE";
        return 0;
    }
    int p = n;
    vector<int> ans;
    while(parent[p] != 0){
        ans.push_back(parent[p]);
        p = parent[p];
    }
    reverse(ans.begin(), ans.end());
    ans.push_back(n);
    cout << ans.size() << '\n';
    for(auto x : ans) cout << x << ' ';
}

