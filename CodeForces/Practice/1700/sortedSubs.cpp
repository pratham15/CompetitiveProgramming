#include<bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
    int n; cin >> n;
    vector<int> a(n+2), pref(n+2), suff(n+2);;
    a[n+1] = 2e9+5;
    int ans = 0; 
    for(int i = 1; i<=n; ++i){
        cin >> a[i];
        if(a[i-1] < a[i]) pref[i] = pref[i-1] + 1;
        else pref[i] = 1;
        ans = max(pref[i], ans);
    }
    if(ans < n) ++ans;
    for(int i = n; i >= 1; --i){
        if(a[i] < a[i+1]) suff[i]  = suff[i+1] + 1;
        else suff[i] = 1;
        if(a[i+1] > a[i-1] + 1) ans = max(ans, pref[i-1] + suff[i+1] + 1);
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

