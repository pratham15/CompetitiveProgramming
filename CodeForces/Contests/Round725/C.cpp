#include<bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

#define int int64_t
void solve(){
    int n, l, r;
    cin >> n >> l >> r;
    vector<int> a(n); for(auto &x : a) cin>> x;
    sort(a.begin(), a.end());
    int64_t ans = 0;
    for(int i = 0; i < n-1; ++i){
       if(a[i] >= r) continue;
       if(a[i] + a[n-1] < l) continue;
       int y = lower_bound(a.begin(), a.end(), l - a[i]) - a.begin();
       y = max(i+1, y);
       int x = upper_bound(a.begin(), a.end(), r - a[i]) - a.begin();
       x = min(x-1, n-1);
       if(x < y) continue;
       ans += x-y+1;
    }
    cout << ans << '\n';
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    t = 1;
    cin >> t;
    while(t--) solve();
}

