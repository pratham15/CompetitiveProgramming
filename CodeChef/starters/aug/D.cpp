
#include<bits/stdc++.h>
using namespace std;
#define int int64_t


const int N = 155;
vector<string> p(N);
vector<int> a[N];
int n;
int64_t ans;

// path from 1, 1 to n, n
int dfs1(int total, int i, int j, int &n) {
    if(i > n-1 || j > n-1 ) 
        return -1;
    if(p[i][j] == '#') return -1;
    int x = total + a[i][j];
    if(i==n-1 && j==n-1) return x;
    return max({dfs1(x, i+1, j, n), dfs1(x, i, j+1, n)});
}


// try every possible path and then do dfs1
void dfs2(int k, int i, int j) {
    if( i < 0 || j < 0) return;
    bool block = false;
    if(p[i][j] == '#') block = true;
    if(k==1) {
        int x = 0;
        p[i][j] = '.';
        ans = max(dfs1(0, 0, 0, n), ans);
        if(block)p[i][j] = '#';
        return;
    }
    p[i][j] = '.';
    dfs2(k-1, i-1, j);
    dfs2(k-1, i, j-1);
    if(block) p[i][j] = '#';
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        cin >> n;
        int k; cin >> k;
        for(int i = 0; i < n; ++i) {
            a[i].clear();
            cin >> p[i];
        }
        for(int i = 0; i < n; ++i)
            for(int j = 0; j < n; ++j) {
                int x; cin >> x;
                a[i].push_back(x);
            }
        ans = dfs1(0, 0, 0, n);
        for(int i = 0; i < n; ++i) 
            for(int j = 0; j < n; ++j) 
                dfs2(k, i, j);
        cout << ans << '\n';
        
    }
}



