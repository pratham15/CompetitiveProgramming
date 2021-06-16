#include<bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
#define int int64_t

const int mod = 1e9 + 7;
int64_t exp (int64_t a, int64_t b){
    int64_t res = 1;
    while(b) {
        if(b&1) res = res * a % mod;
        a = a*a % mod;
        b >>= 1;
    }
    return res;
}


void solve(){
    int n, m;
    cin >> n >> m;
    bool k = false;
    int h = 0;
    for(int i = 0; i < n*m; ++i){
        char c;
        cin >> c;
        if(c=='0') k = true;
        else h++;
    }
    cout << exp(2, h) - (k?0:1) << '\n';
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    t = 1;
    cin >> t;
    while(t--) solve();
}

