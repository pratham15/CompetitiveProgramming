#include<bits/stdc++.h>
using namespace std;
#define int int64_t 
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n, ans = 1e18, odd, even = 1e9, sum;
        cin >> n >> odd;
        sum = odd;
        for(int i = 1; i < n; ++i) {
            int x;
            cin >> x;
            sum += x;
            if(i&1) even = min(x, even);
            else odd = min(odd, x);
            int total = sum + (n - 1 - i/2) * odd + (n-(i-1)/2 - 1)* even;

            ans = min(ans, total);
        }
        cout << ans << '\n';
    }
}
