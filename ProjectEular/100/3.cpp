#include<bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
const long long numm = 600851475143;
long long largestFact = 0;
long factors[2];
 
for (long i = 2; i * i < numm; i++) {
    if (numm % i == 0) { // It is a divisor
        factors[0] = i;
        factors[1] = numm / i;
 
        for (int k = 0; k < 2; k++) {
            bool isPrime = true;
            for (long j = 2; j * j <  factors[k]; j++) {
                if (factors[k] % j == 0) {
                    isPrime = false;
                    break;
                 }
             }
             if (isPrime && factors[k] > largestFact) {
                largestFact = factors[k];
            }
        }
    }
}
cout << largestFact << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();
}

