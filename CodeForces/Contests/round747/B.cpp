#include<bits/stdc++.h>
using namespace std;

#define int int64_t
const int mod = 1e9 + 7;

int64_t power(int64_t a, int64_t b){
    int64_t res = 1;
    while(b) {
        if(b&1) res = res * a % mod;
        a = a*a % mod;
        b >>= 1;
    }
    return res;
}


signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        vector<int> freq(32, 0);
        for(int i = 0; i < 32; ++i) 
            if(k & ( 1 << i )) freq[i]++;
        //for(auto &x : freq) cout << x << ' ';
        int64_t ans = 0;
        for(int i = 0; i < 32; ++i) 
            if(freq[i]) (ans += power(n, i)) %= mod;
        cout << ans << '\n';
    }
}

