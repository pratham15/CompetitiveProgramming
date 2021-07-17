#include<bits/stdc++.h>
using namespace std;
#define int int64_t
void solve() {
    int a[3][3];
    for(int i = 0; i < 3; ++i) 
        for(int j = 0; j < 3; ++j)
            if(j==1 && i==1) continue;
            else cin >> a[i][j];
    int ans = 0;
    for(int i : {0,2}){
        if(a[i][2] - a[i][1] == a[i][1] - a[i][0]) ans++;
        if(a[2][i] - a[1][i] == a[1][i] - a[0][i]) ans++;
    }
    vector<int> p;
    p.push_back(a[0][0] + a[2][2]);
    p.push_back(a[0][2] + a[2][0]);
    p.push_back(a[0][1] + a[2][1]);
    p.push_back(a[1][0] + a[1][2]);
    sort(p.begin(), p.end());
    int l = 1e18;
    int mx = 0, soF=0;
    for(int i = 0; i < 4; ++i) {
        if(p[i] % 2 == 1) continue;
        if(p[i] == l) {
            soF++;
        }
        else {
            soF = 1;
            l = p[i];
        }
        mx = max(mx, soF);
    }
    cout << ans + mx << '\n';
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    int k = 1;
    while(t--) {
        cout << "Case #" << k << ": ";
        k++;
         solve();
    }
}

