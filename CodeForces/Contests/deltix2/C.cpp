#include<bits/stdc++.h>
using namespace std;

#define int int64_t
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n; cin >> n;
    vector<int64_t> a(n);
    for(auto &x : a) cin >> x;
    int ans = 0;

    for(int i = 0; i < n;  i += 2) {
        int t =  a[i];
        bool init = true;
        for(int j = i+1; j < n; ++j) {
            if(j%2 == 1) {
                t -= a[j];
                if(t < 0) break;
                if(t==0) ans++;
                cout << i << ' ' << ans << '\n';
            }
            else 
                t += a[i];
        }
    }
    cout << ans << '\n';
}

