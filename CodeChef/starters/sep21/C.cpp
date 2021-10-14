#include<bits/stdc++.h>
using namespace std;
#define int int64_t
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n; cin >> n;
        int k; cin >> k;
        vector<int> a(n); for(auto &x : a) cin >> x;
        if(k==0) {
            cout << accumulate(a.begin(), a.end(), 0LL) << '\n';
            continue;
        }
        vector<int> pos;
        for(int i = 0; i < n; ++i)
            if(a[i] > 0) pos.push_back(i);
        if(pos.empty()) {
            cout << "0\n";
            continue;
        }
        for(int i = 0; i < n; ++i) {
            if(a[i] > 0) continue;
            int x = lower_bound(pos.begin(), pos.end(), i) - pos.begin();
            int fr, bk;
            if(x==0) bk = pos.back();
            else bk = pos[x-1];
            if(x == pos.size()) fr = pos[0];
            else fr = pos[x];
            if(fr < i) 
                fr += n;
            if(bk > i) bk -= n;
            a[i] = min(fr - i, i - bk);
            if(a[i] > k) a[i] = 0;
            a[i] = -a[i];
        }
        int64_t ans = 0;
        for(int i = 1; i < n - 1; ++i) {
            if(a[i] > 0)ans += a[i];

            if(a[i+1] > 0) ans += k;
            else if(a[i+1] < 0) ans += k + a[i + 1];
            if(a[i-1] > 0) ans += k;
            else if(a[i - 1] < 0) ans += k + a[i - 1];
        }

        if(a[0] > 0) ans += k;
        if(a[0] < 0) ans += k + a[0];
        if(a[n-2] > 0) ans += k;
        if(a[n-2] < 0) ans += k + a[n-2];

        if(a[n-1] > 0) ans += k;
        if(a[n-1] < 0) ans += k + a[n-1];
        if(a[1] > 0) ans += k;
        if(a[1] < 0) ans += k + a[1];
        cout << ans << '\n';
        
    }
}

