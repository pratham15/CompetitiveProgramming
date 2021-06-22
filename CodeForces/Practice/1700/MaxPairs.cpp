#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int64_t> a(n), b(n);
    for(auto &x : a) cin >> x;
    for(auto &x : b) cin >> x;
    vector<int64_t> pref(n+1);
    for(int i = 0; i < n; ++i) pref[i+1] = pref[i] + a[i] * b[i];
    int64_t ans = pref[n];
    for(int i = 0; i < n; ++i){
        int l = i,r =  l+1;
        int64_t c = 0;
        while( l >= 0 && r < n){
            c += a[l] * b[r] + a[r] * b[l];
            int64_t x =  pref[l] + pref[n] - pref[r+1] + c; 
            ans = max(ans,x); 
            l--, r++;
        }
        l = i-1, r = i+1;
        c = a[i] * b[i];
        while( l >= 0 && r < n){
            c += a[l] * b[r] + a[r] * b[l];
            int64_t x =  pref[l] + pref[n] - pref[r+1] + c; 
            ans = max(ans,x);
            l--; r++;
        }
    }
    cout << ans << "\n";
}

