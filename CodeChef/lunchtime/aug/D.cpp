#include<bits/stdc++.h>
using namespace std;


signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        vector<int> a(n+1, 0);
        for(int i = 1; i <= n; ++i) {
            cin >> a[i];
            a[i] %= m;

        }
        if(a[n] % m == 0 ) { cout << "0\n"; continue; }

        //log2(1e5) = 16;
        int ans = 40;
        for(int i = 1; i <= n; ++i) 
            for(int j = i; ; j = (j-1) & i){
                if(i + j >= n){
                  if(j==0) break;
                  continue;
                }
                int64_t left = a[n-i] - a[j];
                if(left % m == 0) ans = min(ans, (int) __builtin_popcount(i));
                if(j==0) break;
            }
        if(ans > 35) cout << "-1\n";
        else cout << ans << '\n';

    }
}


