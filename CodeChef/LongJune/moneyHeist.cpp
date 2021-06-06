#include<bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
    int64_t D, d, P, Q;
    cin >> D >> d >> P >> Q;
    int64_t N = D/d;
    int64_t ans = N;
    ans *= 2*P + (N-1)*Q;
    ans /= 2;
    ans *= d;
    ans += D%d *(P + Q*(N));
    cout << ans << '\n';
    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    t = 1;
    cin >> t;
    while(t--) solve();
}

