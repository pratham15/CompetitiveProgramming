#include<bits/stdc++.h>
using namespace std;
const int N = 2e5+10;
int64_t l[N], r[N], dpl[N], dpr[N];
vector<int> adj[N];

void dfs(int c, int p){
    dpr[c] = 0;
    dpl[c] = 0;
    for(auto x : adj[c]){
        if(x==p) continue;
        dfs(x, c);
        dpl[c] += max(1LL*abs(l[c] - l[x]) + dpl[x], 1LL*abs(l[c] - r[x]) + dpr[x]);
        dpr[c] += max(1LL*abs(r[c] - l[x]) + dpl[x], 1LL*abs(r[c] - r[x]) + dpr[x]);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        for(int i = 0; i < n; ++i)
            cin >> l[i] >> r[i], adj[i].clear();
        for(int i = 0; i < n-1; ++i){
            int a, b; cin >> a >> b;
            --a, --b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        dfs(0,0);
        cout << max(dpl[0], dpr[0]) << '\n';
    }
}

