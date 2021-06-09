#include<bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
    int n, h, r, l;
    cin >> n >> h >> l >> r;
    vector<int> a(n); for(auto &x : a) cin >> x;
    int currentTime = 0;
    auto check = [](int t, int l, int r){
        return l <= t && r >= t; 
    };
    vector<int> prv(n+1, 0), nxt(n+1, 0);
    for(int i = 0; i < n; ++i){
        currentTime += a[i];
        for(int p = 0; p <= n; ++p){
            nxt[p] = max(nxt[p], prv[p]+ check((currentTime- p) % h, l, r));
            if( p < n ) nxt[p+1] =  max(nxt[p+1], prv[p] + check((currentTime - p) % h, l, r)); 
        }
        swap(prv, nxt);
    }
    cout << *max_element(prv.begin(), prv.end());
    cout << *max_element(nxt.begin(), nxt.end());
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();
}

