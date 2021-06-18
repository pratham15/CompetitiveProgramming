#include<bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
    int n, m;
    cin >> n >> m;
    vector<int>a(n), b(m); for(auto &x : a) cin >> x;
    for( auto&x : b) cin >> x;
    sort(a.begin(), a.end());
    for(int i = 0; i < m; ++i){
        int x = upper_bound(a.begin(), a.end(), b[i]) - a.begin();
        cout << x<< ' '; 
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    t = 1;
    while(t--) solve();
}

