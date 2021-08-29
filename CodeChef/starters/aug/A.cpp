#include<bits/stdc++.h>
using namespace std;

#define int int64_t
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n; cin >> n;
        int k; cin >> k;
        vector<int> a(n);
        for(auto &x : a) cin >> x;
        sort(a.begin(), a.end());
        for(int i = 0; i < k; ++i) {
            if(a[i] > 0) break;
            a[i] = abs(a[i]);
        }
        sort(a.begin(), a.end());
        int64_t ans = 0;
        for(int i = n-1; i >= 0; --i) {
            if(a[i] < 0) break;
            ans += a[i];
        }
        cout << ans << '\n';
    }
}

