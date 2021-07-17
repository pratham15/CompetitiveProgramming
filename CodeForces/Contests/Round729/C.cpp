#include<bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;
inline int64_t gcd(int64_t x,int64_t y){
    return (y?gcd(y, x%y):x);
}
inline int64_t lcm (int64_t a, int64_t b) {
    return(a*b)/gcd(a,b);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int64_t n;
        cin >> n;
        int64_t ans = 0, cLcm = 1;
        for(int i = 2; cLcm <= n; ++i){
            int64_t nLcm = lcm(i, cLcm);    
            int64_t cur = n/cLcm; cur-= n/nLcm;
            cLcm = nLcm;
            ans += cur * i;
            ans %= mod;
        }
        cout << ans << '\n';
    }            
}

