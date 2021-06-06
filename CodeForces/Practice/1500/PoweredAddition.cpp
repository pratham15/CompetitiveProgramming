#include<bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
void solve(){
    int n;
    cin >> n;
    vector<int64_t> a(n);
    for(auto &x : a) cin >> x;
    int64_t x = a[0], m = 0;
    for(int i = 1; i < n; ++i){
        if(a[i] < x) m = max(x-a[i], m);
        else x = a[i];
    }
    cout << ceil(log2(m+1)) << '\n';
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    t = 1;
    cin >> t;
    while(t--) solve();
}

