#include<bits/stdc++.h>
using namespace std;

#define int int64_t
const int S = 1e5;
vector<bool> is_prime(S+1, true);
void sieve(){
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i <= S; i++) 
        if(is_prime[i])
            for (int j = i * i; j <= S; j += i)
                is_prime[j] = false;
}

//vector<int> pref_sums(S+1, 0);
//void pref(){
//    pref_sums[0] = pref_sums[1] = 0;
//    for(int i = 2; i <= S; ++i)
//        pref_sums[i] += pref_sums[i-1] + is_prime[i];
//}


signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    sieve();
    vector<int> primes;
    set<int> s;
    for(int i = 2; i < S; i *= 2) s.insert(i);
    for(int i = 2; i < S; ++i) if(is_prime[i] && (s.count(i-1) || s.count(i+1))) primes.push_back(i);
    for(auto x : primes) cout << x << ' ';
}

