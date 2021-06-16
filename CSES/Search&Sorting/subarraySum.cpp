#include<bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
    int64_t n, s;
    cin >> n >> s;
    vector<int> a(n); for(auto &x : a) cin >> x;
    map<int64_t, int> mp;
    int64_t cnr = 0, ans = 0;
    for(int i = 0; i < n; ++i){
       cnr += a[i];
       if(cnr == s) ans++;
       if(mp.count(cnr - s)) ans += mp[cnr - s];
       mp[cnr]++;
    }
    cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();
}

