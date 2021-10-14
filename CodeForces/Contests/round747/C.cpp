#include<bits/stdc++.h>
using namespace std;

#define int int64_t
int N = 1e6;
vector<bool> is_prime(N+1, true);
void sieve() {
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i <= N; i++) {
        if (is_prime[i] && (long long)i * i <= N) {
            for (int j = i * i; j <= N; j += i)
                is_prime[j] = false;
        }
    }
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    sieve();
    vector<int> primes;
    for(int i = 2; i < N; ++i) 
        if(is_prime[i])
            primes.push_back(i);
    int t;
    cin >> t;
    while(t--) {
        int n;
        char c;
        string s;
        cin >> n >> c >> s;
        if(count(s.begin(), s.end(), c) == n) {
            cout << 0 << '\n';
            continue;
        }
        set<int> p;
        vector<int> p2;
        for(int i = 0; i < primes.size(); ++i) {
            if(primes[i] > n) break;
            else p.insert(primes[i]), p2.push_back(primes[i]);
        }

        auto process = [&](int x) {
            if(x % 2 == 0) {
                while(x % 2 == 0) x /= 2;
                if(p.count(2) == 1) p.erase(2);
            }
            for(int i = 3; i <= sqrt(x); i += 2) {
                if(x % i == 0) {
                    while (x % i == 0) x /= i;
                    if(p.count(i) == 1) p.erase(i);
                }
            }
            if(x > 2) 
                if(p.count(x) == 1) p.erase(x);
        };
        vector<int> fr;
        for(int i = 0; i < n; ++i) {
            if(s[i] != c)
                process(i+1);
            else fr.push_back(i+1);
        }
        if(p.size() >= 1) {
            cout << 1 << '\n';
            cout << *p.begin() << '\n';
        }
        else {
            reverse(p2.begin(), p2.end());
            int64_t ans = p2[0];
            p.insert(p2[0]);
            for(int i = 1; i < p2.size(); ++i) {
                if(ans > n) break;
                p.insert(p2[i]);
                ans *= p2[i];
            }
            cout << p.size() << '\n';
            for(auto x: p) cout << x << " ";
            cout << "\n";
        }
    }
}
