#include<bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
    int n;
    cin >> n;
    bool even = false, odd = false;
    for(int i = 0 ; i < n;++i){
        int k;
        cin >> k;
        if(k&1) odd = true;
        else even = true;
    }
    if(odd && even) cout << "No\n";
    else cout << "Yes\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    t = 1;
    cin >> t;
    while(t--) solve();
}

