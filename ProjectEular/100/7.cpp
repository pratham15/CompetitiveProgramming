#include<bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

const int N =1e7+10;
vector<bool> is_prime(N+1, true);
void sieve(){
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i <= N; i++) {
    if (is_prime[i] && (long long)i * i <= N) {
        for (int j = i * i; j <= N; j += i)
            is_prime[j] = false;
        }
    }
}

int a = 0;
void solve(){
   sieve();
   for(int i = 2; i < (int)1e7; ++i){
       a += is_prime[i];
       if(a == 10001) {
cout << i  << '\n'; break;
       }
   }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();
}

