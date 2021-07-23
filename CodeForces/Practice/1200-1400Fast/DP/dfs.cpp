#include<bits/stdc++.h>
using namespace std;

vector<int> graph[500];
void dfs(int n, int left, int val, int i, int j){
   graph[i][j] = val;
   left--;
   if(left == 0) return;
   if(j > 0 && graph[i][j-1] == 0) dfs(n, left, val, i, j-1);
   else if(i < n-1) 
        dfs(n, left, val, i+1, j);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> a(n); for(auto &x : a) cin >> x;
    for(int i = 0; i < n; ++i) graph[i].resize(n, 0);
    for(int i = 0; i < n; ++i) {
        dfs(n, a[i], a[i], i, i);
    }
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j <= i; ++j) cout << graph[i][j] << ' ';
        cout << '\n';
    }
}
/*

0 0 0 0 0
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0
*/
