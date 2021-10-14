#include<bits/stdc++.h>
using namespace std;
#define int int64_t
const int mod = 998244353;

inline int power(int a, int b) {
    int res = 1;
    while(b) {
        if(b & 1) res *= a;
        a *= a;
        res %= mod, a %= mod;
        b >>= 1;
    }
    return res;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> a(n); for(auto &x : a) cin >> x;
    int64_t ans = 0;
    for(int i = 1; i < n; ++i) {
        for(int j = 0; j < i; ++j) {
            if(a[j] <= a[i]) {
                ans += power(2, i - j - 1); 
                ans %= mod;
            }
        }
    }
    cout << ans;
}

