#include<bits/stdc++.h>
using namespace std;
#define int int64_t
void solve(){
    int n;
    cin >> n;
    vector<pair<int, int>> a(n);
    for(auto &[x,y] : a) cin >> y >> x;
    sort(a.begin(), a.end());
    vector<int> mn(n), discount(n);
    for(int i = 0; i < n; ++i){
        discount[i] = a[i].first;
        mn[i] = a[i].second;
    }
    /*
    for(int i = 0; i < n; ++i){
        cout << mn[i] << ' ' << discount[i] << '\n';
    }
    */
    int l = 0, r = n-1;
    int64_t ans = 0, items = 0;
    while(true) {
        while( l < n && mn[l] == 0) l++;
        while( r>= 0 && mn[r] == 0) r--;
        if( l > r) break;
        if(items >= discount[l]) ans += mn[l], items += mn[l], mn[l] = 0;
        else {
            int mnItems = min(discount[l] - items, mn[r]);
            ans += 2*mnItems;
            items += mnItems;
            mn[r] -= mnItems;
        }
    }
    cout << ans << '\n';
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();
}

