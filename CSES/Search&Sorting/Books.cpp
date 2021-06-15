#include<bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
    int n; cin >> n;
    vector<int> a(n); for(auto &x : a) cin >> x;
    sort(a.begin(), a.end());
    vector<int64_t> pref(n);
    pref[0] = a[0];
    for(int i = 1; i < n; ++i) pref[i] = pref[i-1] + a[i];
    if(a[n-1] >= pref[n-2]) cout << 2* a[n-1] <<'\n';
    else cout << pref[n-1];

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();
}

