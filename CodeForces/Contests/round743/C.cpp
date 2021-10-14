#include<bits/stdc++.h>
using namespace std;

const int N = 2e5 + 20;
vector<int> adj[N];
vector<set<int>> req(N);
set<int> visitable;

int remain;

void dfs(int v){
    for(auto x: adj[v]){
        req[x].erase(v);
        if(req[x].empty()) 
            visitable.insert(x);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        /*Step - 1 Input
         *
         *  set<int> req[] holds the requirements for a particular chapter
         *  vector<int> adj[] holds the chapers for which this chapter is needed
         *
         *Step - 2 Solve
         *  set<int> visitable contains chapters that can be read
         *  by lower_bound set, we can find the next visitable chapter from the beginning of the book. 
         *  if(lower_bound == set.end()) that means we have reached the readable end. Either we can start from beginning
         *  or we have reached a soln if left chapters == 0. If we start from beginning, and there's no visitable
         *  chapter and left > 0, that means no possible answer.
         */


        int n; 
        cin >> n;
        visitable.clear();
        for(int i = 0; i < n; ++i) adj[i].clear(), req[i].clear();
        for(int i = 0; i < n; ++i) {
            int k; cin >> k;
            if(k == 0) visitable.insert(i);
            while(k--){
                int x; 
                cin >> x;
                --x;
                adj[x].push_back(i);
                req[i].insert(x);
            }
        }

        /*
        cout << "adj\n";
        for(int i = 0; i < n; ++i) {
            for(auto x: adj[i]) cout << x << ' ';
            cout << '\n';
        }
        
        
        
        cout << "\nreq\n";
        for(int i = 0; i < n; ++i) {
            for(auto x: req[i]) cout << x << ' ';
            cout << '\n';
        }
        */
        
        remain = n;
        int x = 0, ans = 0;
        bool nosol = false;

        
        while(true) {
            //cout << "visitable = ";
            //for(auto y: visitable) cout << y << ' ';
            //cout << '\n';
            if(visitable.empty() && remain== 0) 
                break;
            auto it = visitable.lower_bound(x);
            if(it == visitable.end()) {
                if(visitable.empty()) {
                    nosol = true;
                    break;
                }
                it = visitable.begin();
                ans++;
            }
            x = *it;
            remain--;
            dfs(*it);
            visitable.erase(it);
        }
        cout << (nosol? -1 :  ans + 1) << '\n'; 
    }
}

