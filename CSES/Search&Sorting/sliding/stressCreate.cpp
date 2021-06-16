#include<bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
    
}

int main(){
    const int n = 1e9;
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    freopen("in.txt", "w", stdout);
    int k = 1000;
    int l = rng () % k;
    cout << k << ' ' << l << '\n';
    for(int i = 0; i < k; ++i) cout << rng() % (int) 1e9 << ' ';
}

