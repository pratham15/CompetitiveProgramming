#include<bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
const int N= 1e7+10;
vector<bool> is_prime(n+1, true);
void sieve(){
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i <= n; i++) {
    if (is_prime[i] && (long long)i * i <= n) {
        for (int j = i * i; j <= n; j += i)
            is_prime[j] = false;
        }
    }
}

vector<int> pref(n+1, 0);
void solve(){
   int k;
   cin >> k;
   cout <<(k == 2 ? 0 : 1) + pref[k] - pref[k/2] << '\n';
}

int main(){
    sieve();
    for(int i = 2; i < n; ++i){
        pref[i]+= pref[i-1] + is_prime[i];
    }
   // for(auto x : pref) cout << x << ' ';
   // cout << '\n';
   // for(auto x : is_prime) cout << x << ' ';
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    t = 1;
    cin >> t;
    while(t--) solve();
}

