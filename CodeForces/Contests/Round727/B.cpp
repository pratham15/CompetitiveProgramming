#include<bits/stdc++.h>
using namespace std;
#define int int64_t
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, q;
    string s;
    cin >> n >> q >> s;
    vector<vector<int>> a(n+1, vector<int>(26,0));
    for(int i = 1; i <= n; ++i){
        a[i] = a[i-1];
        a[i][s[i-1] - 'a']++;
    }
    while(q--){
        int xa, b;
        cin >> xa >> b;
        int64_t ans = 0;
        for(int i = 0; i < 26; ++i){
            ans += (i+1)*(a[b][i] - a[xa-1][i]);
        }
        cout << ans << '\n';
    }

}
