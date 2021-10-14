#include<bits/stdc++.h>
using namespace std;

#define int int64_t
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while(T--) {
        int n, k; cin >> n >> k;
        vector<int64_t> a(n);
        for(auto &x : a) cin >> x;
        int64_t ans = -1e17;
        int b = max(0LL,n-k*2);
        for(int i = n-1; i >= 1; --i) 
            for(int j = i-1; j >= b; --j) 
                ans = max(ans, (i+1)*(j+1) - k * (a[i] | a[j])); 
        cout << ans << '\n';
    }
}

