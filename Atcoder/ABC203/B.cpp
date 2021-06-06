#include<bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
    int n, k;
    cin >> n >> k;
    int64_t ans = 0;
    for(int i = 1; i <=k ;++i){
        ans += i;    
        //cout << ans << ' ' << k << '\n';
    }
    ans*=n;
   // cout << ans << '\n';
    for(int i = 1; i <= n; ++i){
        ans += i*100*k;
    }
    cout << ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();
}

