#include<bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    t = 1;
    cin >> t;
    while(t--) {
        int64_t n, m, i, j;
        cin >> n >> m >> i >> j;
        cout << 1 << ' '  << m << ' ' << n << ' ' << 1 << '\n';
    }
}

