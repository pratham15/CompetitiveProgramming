#include<bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
    int a, b, c;
    cin >> a >> b >> c;
    if(a==b) cout << c;
    else if(b==c) cout << a;
    else if(a==c) cout << b;
    else cout << 0;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();
}

