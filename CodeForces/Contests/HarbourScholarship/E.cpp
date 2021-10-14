#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> a, vector<int> &b, int n) {
    vector<int> freq(n+1);
    for(int i =0; i < n; ++i)  freq[a[i]] = i;
    //for(auto &x : b) cout << x << ' ';
    //cout << '\n';
    int m = 0;
    for(int i = 0; i < n; ++i) {
        if(a[i] != b[i]) {
            m++;
            int x = freq[b[i]], y = a[i];
            swap(a[i], a[freq[b[i]]]);
            freq[y] = x, freq[a[i]] = i;
        }
    }
    return m;
}

void dfs(auto &visited, auto &g, int p) {
    if(visited[p]) return;
    p = g[p];
    dfs(visited, g, p);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while(T--) {
        int n, swaps;
        cin >> n >> swaps;
        vector<int> freq(n+1); 
        vector<int> a(n);
        for(int i = 0; i < n; ++i) { 
            cin >> a[i]; 
            int x = i + 1 - a[i]; 
            if(x < 0) x += n; 
            freq[x]++; 
        }
        vector<int> ans;
        for(int i = 0; i < n; ++i) {
            if(freq[i] + 2*swaps >= n) {
                vector<int> b(n);
                int l = 1;
                for(int j = i; j < n; ++j) b[j] = l++;
                for(int j = 0; j < i; ++j) b[j] = l++;
                if(solve(a, b, n) <= swaps) ans.push_back(i);
            }
        }
        cout << ans.size() << ' ';

        for(auto &x : ans) cout << x << ' ';
        cout << '\n';
    }
}


// 1 2 3 4 5 6 7
// 1 4 3 6 5 7 2
// 1 3 4 5 2
