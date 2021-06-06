#include<bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

const int mod = 1e9+ 7;
int64_t exp(int64_t a, int64_t b){
    int64_t res = 1;
    while(b){
        if(b&1) res = res * a % mod;
        a = a*a %mod;
        b >>= 1;
    }
    return res;
}
void solve(){
   int64_t N, M;
   cin >> N >> M;
   int64_t a = exp(2, N);
   cout << exp(a-1,M) << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    t = 1;
    cin >> t;
    while(t--) solve();
}

