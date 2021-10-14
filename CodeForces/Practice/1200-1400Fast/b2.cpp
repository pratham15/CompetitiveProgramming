#include<bits/stdc++.h>
using namespace std;
#define int int64_t
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    vector<int> prc(60), pref(60);
    pref[0] = prc[0] = 1;
    for(int i = 1; i < 60; ++i) {
        prc[i] = prc[i-1] * 2;
        pref[i] = pref[i-1];
        pref[i] += prc[i];
    }
    while(t--){
        int n, p;
        cin >> n >> p;
        if(p >= prc[n-1]) {
            cout << n << '\n';
            continue;
        }
        int ans = lower_bound(prc.begin(), prc.end(), p) - prc.begin();
        if(p < prc[ans]) ans--;
        ans += (pref[n-1] - pref[ans] + p - 1) / p + 1;
        cout << ans << '\n';
    }
}


