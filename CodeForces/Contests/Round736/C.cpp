#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, m; cin >> n >> m;
    set<int> frs;
    vector<set<int>> adj(n+1);
    vector<int> freq(n+1);
    while(m--) {
        int a, b; cin >> a >> b;
        adj[a].insert(b);
        adj[b].insert(a);
        frs.insert(a);
        frs.insert(b);
        freq[a]++;
        freq[b]++;
    }
    int q;
    cin >> q;
    int total = n;

    int tr = 0;
    while(q--) {
        int a, b, k;
        cin >> k;
        if(k==1) { 
            cin >> a >> b;
            adj[a].insert(b);
            adj[b].insert(a);
            frs.insert(a);
            frs.insert(b);
            freq[a]++;
            freq[b]++;
        }
        else if(k==2) {
            cin >> a >> b;
            adj[b].erase(a);
            adj[a].erase(b);
            if(adj[b].size() == 0) 
                frs.erase(b);
            if(adj[a].size() == 0) frs.erase(a);
            freq[a]--;
            freq[b]--;
        }
        else {
            if(tr == 1) {

            }
            set<int> cp;
            cp = frs;
            vector<int> freqcp = freq;
            while(cp.size()) {
                int x = *cp.begin();
                if(freqcp[x] <= 0){
                    cp.erase(x);
                    continue;
                }
                for(auto c :adj[x]) {
                    freqcp[c]--;
                }
                freqcp[x] = 0;
                total--;
            }
            cout << total << '\n';
        }
    }
}

