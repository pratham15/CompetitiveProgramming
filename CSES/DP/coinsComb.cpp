#include<bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
const int MOD = 1e9+7;
void solve(){
    int n, s;
    cin >> n >> s;
    vector<int> coins(n);
    for(auto &x : coins) cin >> x;
    vector<int> a(s+1, 0);
    a[0] = 1;
    for(int i = 1; i<=s; ++i){
        for(auto x : coins)
            if(i-x>=0) (a[i] += a[i-x]) %= MOD;
    }
    cout << a[s] << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();
}

