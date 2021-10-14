#include<bits/stdc++.h>
using namespace std;
#define int int64_t
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n, h;
        cin >> n >> h;
        vector<int> a(n); for(auto &x : a) cin >> x;
        sort(a.begin(), a.end());
        if(n == 1) {
            h += a[0] - 1;
            cout << h / a[0] << '\n';
            continue;
        }
        int x = a[n-1], y = a[n-2];
        if(h <= x) {
            cout << 1 << '\n';
            continue;
        }
        int ans = 0;
        int z = x + y;
        ans = h / z;
        h %= z;
        ans *= 2;
        if(h == 0) cout << ans << '\n';
        else if(h <= x) cout << ans+1 << '\n';
        else cout << ans+2 << '\n';
    }
}

