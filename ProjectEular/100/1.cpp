#include<bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
    int64_t ans = 0;
    for(int i = 3; i<=1000; ++i){
        if(i%3 == 0 || i%5 == 0) ans += i;
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

