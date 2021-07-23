#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> a(n), b(n);
        for(auto &x : a) cin >> x;
        for(auto &x : b) cin >> x;
        int l = 0, r = n;
        int ans = 1e9;
        while(l <= r) {
            int mid = (l + r) / 2;
            int N = (n + mid)/4;
            int64_t s1 = 0, s2 = 0;
            for(int i = N; i < n; ++i) 
                s1 += a[i]; 
            int i = n-1, totalEls = n + mid - N;
            while(i >= 0 && totalEls) {
                s2 += b[i--], totalEls--;
            }
            cout << s2 << ' ' << s1 << ' ' << n+mid << '\n';
            s1 += mid*100;
            if(s1 >= s2) {
                r = mid - 1;
                ans = min(ans, mid);
            }
            else l = mid + 1;
        }
        cout << ans << '\n';
    }
}

