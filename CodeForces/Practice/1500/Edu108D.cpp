#include<bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
int64_t a[5001], b[5001];
int64_t pref[5002];

void solve(){
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i)
        cin >> a[i];
    for(int i = 0; i < n; ++i)
        cin >> b[i];
    for(int i = 1; i<=n; ++i) 
        pref[i] = pref[i-1] + 1LL*a[i-1]*b[i-1];
    int64_t maxAns = pref[n];
    for(int rot = 0; rot < n; ++rot){
        int l = rot-1, r = rot+1;
        int64_t cur = a[rot] * b[rot]; 
        while(l >= 0 && r < n){
            cur += a[l] * b[r];
            cur += a[r] * b[l];
            maxAns = max(maxAns, cur + pref[l] + pref[n] - pref[r+1]);
            l--, r++;            
        }
        cur = 0, l = rot, r = rot+1;
        while(l >=0 && r < n){
            cur += a[l] * b[r];
            cur += a[r] * b[l];
            maxAns = max(maxAns, cur + pref[l] + pref[n] - pref[r+1]);
            l--, r++;
        }
    }
    cout << maxAns;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();
}

