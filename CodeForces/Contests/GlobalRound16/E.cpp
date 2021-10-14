#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> g[n];
        for(int i = 0; i < n-1; ++i) {
            int x, y; cin >> x >> y;
            --x, --y;
            g[x].push_back(y);
            g[y].push_back(x);
        }
        int ans = 0;
        function <bool(int, int)> dfs = [&](int v, int pr) {
            bool bud = false;
            for(auto x: g[v]) {
                if(x == pr) continue;
                bud |= dfs(x, v);
            }
            if(bud == false) return true;
            ans += 1;
            return false;
        };
        bool rootBud = dfs(0, -1);
    }

}
