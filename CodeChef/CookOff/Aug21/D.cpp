#include<bits/stdc++.h>
using namespace std;
#define int int64_t
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n, k, x;
        cin >> n >> k >> x;
        vector<int> a(n);
        for(auto &x :a) cin >> x;
        sort(a.begin(), a.end());
        int ans = 0;
        for(int i = n-1; i >= 1 and k > 0; --i) 
            if(a[i] + a[i-1] > x) {
                ans += x;
                a[i] = 0, a[i-1] = 0;
                k--;
                i--;
            }
        int y = accumulate(a.begin(), a.end(), 0LL);
        cout << ans + y << '\n';
    }
}
