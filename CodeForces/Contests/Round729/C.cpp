#include<bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    vector <int64_t> fact(20, 1);
    for(int i = 3; i <= 18; ++i){
        fact[i] = fact[i-1] * i;
    }
    int t;
    cin >> t;
    while(t--){
        int64_t n;
        cin >> n;
        int64_t ans = (n+1) / 2 * 2 + n/2 * 3;
        for(int64_t i = 3; i <= 18; ++i) {
            if(fact[i] > n) break;
            ans -= (n / fact[i]) * i;
            ans += (n / fact[i]) * (i+1);
        }
        ans %= mod;
        cout << ans << "\n";
    }            
}

