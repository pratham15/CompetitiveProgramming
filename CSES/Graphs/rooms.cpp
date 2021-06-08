#include<bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

const int nax = 1000;
vector<int> a[nax];
int n, m;
void traverse(int i, int j){
    if(i < 0 || j < 0 || i >= n || j >= m)
        return;
    if(a[i][j] != 0) return;
    a[i][j] = 1;
    traverse( i+1, j);
    traverse( i, j+1);
    traverse( i, j-1);
    traverse( i-1, j);
}


void solve(){
   cin >> n >> m;
   for(int i = 0; i < n; ++i){
       for(int j =0; j < m; ++j){
           char c;
           cin >> c;
           if(c=='.') a[i].push_back(0);
           else a[i].push_back(1); 
       }
   }
   int ans = 0;
   for(int i = 0; i < n; ++i){
       for(int j = 0; j < m; ++j){
           if(a[i][j] == 0){
               traverse(i, j);
               ans++;
           }
       }
   }
   cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();
}

