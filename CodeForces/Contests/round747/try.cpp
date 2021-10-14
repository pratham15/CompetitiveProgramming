#include<bits/stdc++.h>
using namespace std;

#define int int64_t
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

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    cout << power(4, power(2, n) - 2) * 6 % mod;
}

