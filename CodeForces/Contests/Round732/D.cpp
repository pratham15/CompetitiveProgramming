#include<bits/stdc++.h>
using namespace std;

const int mod = 998244353;
const int N = 1e5 + 10;
int64_t inv (int64_t a) {
    if(a==1) return 1;
    return (inv(mod%a)) * (mod - mod/a) % mod;
}
vector<int64_t> fact(N, 1), rfact(N, 1);
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    for(int i = 1; i < N; ++i) {
        fact[i] = fact[i-1] * i % mod;
        rfact[i] = rfact[i-1] * inv(i) % mod;
    }
    int t;
    cin >> t;
    while(t--) {
        int n; string s;
        cin >> n >> s;
        int grp, zero;
        grp = zero = 0;
        for(int i = 0; i < n;++i) {
            if(s[i] == '0') zero++;
            else if(i+1 < n && s[i+1] == '1') {grp++; i++;}
        }
        cout << fact[zero + grp] * rfact[zero] % mod * rfact[grp] % mod << '\n';
    }

}

