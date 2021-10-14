#include<bits/stdc++.h>
using namespace std;

#define int int64_t
void solve () {
    int n, l = 1e18; cin >> n;
    vector<int> a(n), b(n);
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        if(i>0) a[i] += a[i-1];
    }
    for(int i = 0; i < n; ++i) {
        cin >> b[i];
        if(i > 0) b[i] += b[i-1];
    }
    for(int i = 0; i < n; ++i) {
        int bot, t;
        if(i == 0) bot = 0;
        else bot = b[i-1];
        t = a[n-1] - a[i];
        int k = max(bot, t);
        l = min(l, k);
    }
    cout << l << '\n';
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while(T--) {
        solve();
    }
}

