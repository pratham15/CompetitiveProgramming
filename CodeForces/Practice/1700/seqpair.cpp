#include<bits/stdc++.h>
using namespace std;
#define int int64_t
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(auto &x : a) cin >> x;
        map<int, int> mp;
        int64_t ans = 0;
        for(int i = 0; i < n; ++i){
            ans += 1LL * mp[a[i]] * (n-i), mp[a[i]] += i+1;
        }

        cout << ans << '\n';
    }
}

