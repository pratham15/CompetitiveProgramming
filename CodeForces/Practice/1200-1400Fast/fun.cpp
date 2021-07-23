#include<bits/stdc++.h>
using namespace std;

const int S = 1010;
vector<bool> is_prime(S+1, true);
vector<int> primes;
void sieve(){
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i <= S; i++) {
        if(is_prime[i]){
            primes.push_back(i);
            for (int j = i * i; j <= S; j += i)
                is_prime[j] = false;
            }
        }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    sieve();
    int T;
    cin >> T;
    while(T--) {
        map<int, int> mp;
        auto k = [&] (int x) -> void{
            for(auto p : primes) {
                if(p*p > x) break;
                while(x%(p*p) == 0) x/= p*p;
            }
            mp[x]++;
        };
        int n; cin >> n;
        while(n--) {
            int x; cin >> x;
            k(x);
        }
        int ans = 0, even = 0;
        for(auto [x, y] : mp) {
           ans = max(ans, y);
           if(x == 1) even += y;
           if(y%2 == 0 && x != 1) even += y;
        }
        
        int q; cin >> q;
        while(q--) {
            int64_t x; cin >> x;
            if(x == 0) cout << ans;
            else cout << max(ans, even);
            cout << '\n';
        }
       
    }
   
}
