#include<bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
    int n, m;
    cin >> n >> m;
    vector<string> a(n), R(n), W(n);
    for(auto &x : a) cin >> x;
    string k = string(m, '0');
    for(int i = 0; i < m; ++i) if(i&1) k[i] = 'R'; else k[i] = 'W';
    for(int i = 0; i < m; ++i) if(i&1) l[i] = 'W'; else k[i] = 'R';
    for(int i = 0; i < n; ++i){
        if(i&1) R[i] = k, w[i] = l;
        else R[i] = l, w[i] = k;
    }
    for(int i = 0; i < n; ++i)
        
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();
}

