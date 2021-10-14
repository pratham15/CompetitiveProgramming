#include<bits/stdc++.h>
using namespace std;
int ttl, found;
const int N = 1e5 + 10;
vector<int> adj[N];
vector<int> val;
int dfs(int u, int p = -1) {
    int sXor = val[u];
    for(auto c: adj[u]) {
        if(c == p) continue;
        sXor ^= dfs(c, u);
    }
    if(sXor == ttl) sXor = 0, found++;
    return sXor;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        found = 0, ttl = 0;
        int n, k;
        cin >> n>> k;
        val = vector<int> (n);
        for(int i = 0; i < n; ++i) adj[i].clear();
        for(auto &x : val) {
            cin >> x;
            ttl ^= x;
        }
        for(int i = 0; i < n-1; ++i) {
            int x, y;
            cin >> x >> y;
            --x, --y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        if(ttl == 0) {
            cout << "YES\n";
            continue;
        }
        if(k==2) {
            cout << "NO\n";
            continue;
        }
        dfs(0);
        if(found >= 2) 
            cout << "YES\n";
        else cout << "No\n";
    }
}

