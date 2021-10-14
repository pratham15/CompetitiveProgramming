#include<bits/stdc++.h>
using namespace std;

#define int int64_t
const int mod = 1e9 + 7;
int power(int a, int b) {
    int res = 1;
    while(b) {
        if(b & 1) res = res * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return res % mod;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    int nodes = (1LL << n) - 2;
    int ans = power(4, nodes);
    ans *= 6;
    ans %= mod;
    cout << ans << '\n';
}

