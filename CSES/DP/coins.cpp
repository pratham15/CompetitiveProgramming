#include<bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
    int n, s;
    cin >> n >> s;
    vector<int> coins(n);
    for(auto &x : coins) cin >> x;
    vector<int> a(s+1, 1e9);
    a[0] = 0;
    for(int i = 0; i < s; ++i){
        for(auto x : coins){
            if(a[i] != 1e9)
            {
                if(i+ x <= s) a[i+x] = min(a[i+x], a[i]+1);
            }
        }
    }
    cout << (a[s] == 1e9 ? -1 : a[s]) << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();
}

