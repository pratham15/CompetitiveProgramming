#include<bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {

        int n, k;
        cin >> n >> k;
        vector<set<int>> adj(n+1);
        set<int> leaves, curleaves;
        
        for(int i = 0; i < n - 1; ++i) {
            int a, b;
            cin >> a >> b;
            adj[a].insert(b);
            adj[b].insert(a);
        }

        for(int i = 0; i <= n; ++i) 
            if(adj[i].size() == 1) leaves.insert(i);

        while(k--) {
            if(n < 3) {
                n = 0;
                break;
            }
            n -= leaves.size(); 
            for(int x: leaves){ 
                int y = *adj[x].begin();
                adj[y].erase(x);
                if(adj[y].size() == 1)
                    curleaves.insert(y);
            }

            leaves = curleaves;
            curleaves.clear();
        }
        cout << n << '\n';
    }
}

