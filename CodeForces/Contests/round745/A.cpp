#include<bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;
const int N = 1e6;
int64_t fact[N];

int64_t power(int64_t a, int64_t b){
    int64_t res = 1;
    while(b) {
        if(b&1) res = res * a % mod;
        a = a*a % mod;
        b >>= 1;
    }
    return res;
}

int64_t inverse(int64_t a, int64_t b) {
    return (a * power(b, mod - 2)) % mod;
}
int64_t inverse(int64_t a){
    return power(a, mod-2);
}

int init() {
    fact[1] = 1;
    for(int i = 2; i < N; ++i) 
        fact[i] = (fact[i-1] * i) % mod;
    return 1;
}

int g = init();


signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n; cin >> n;
        cout << inverse(fact[2*n], 2) << '\n';
    }
}

