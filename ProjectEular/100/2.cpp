#include<bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
const int N = 1e4;
void solve(){
    int64_t ans = 3;
    vector<int> a(1e4, 0);
    a[1] = 1; a[2] = 2;
    for(int i= 3;  i < N; ++i){
        a[i] = a[i-1] + a[i-2];
        if(a[i] >=  (int) 4e6) break;
        ans += (a[i]% 2 == 1 ? 0 : a[i]);
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

