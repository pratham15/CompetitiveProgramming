#include<bits/stdc++.h>
using namespace std;
#define int int64_t
vector<vector<int>> a(1010, vector<int> (5));


bool solve(int i, int j,int n) {
    int c, l, r;
    c = l = r = 0;
    for(int k = 0; k < n; ++k) {
        if(a[k][i] == 1 && a[k][j] == 1) c++;
        else if(a[k][i] == 1) l++;
        else if(a[k][j] == 1) r++;
    }
    if(r <= n/2 && l <= n/2 && (l + r + c) == n) return true;
    else return false;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        for(int i = 0; i < n; ++i) 
            for(int j = 0; j < 5; ++j) 
                cin >> a[i][j];
        bool ok = false;
        for(int i = 0; i < 4; ++i) {
            for(int j = i+1; j < 5; ++j) {
                ok |= solve(i, j, n);
            }
        }
        cout << (ok ? "YES\n": "NO\n");
    }
}

