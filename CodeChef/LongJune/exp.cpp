#include<bits/stdc++.h>
using namespace std;

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
    int64_t a, b, c;
    cin >> a >> b >> c;
    b = exp(b, c);
    cout << exp(a,b) << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();

}
