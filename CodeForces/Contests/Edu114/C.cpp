#include<bits/stdc++.h>
using namespace std;

#define int int64_t
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n; cin >> n;
    vector<int> s(n);
    int def = 0;
    for(auto &x : s) {
        cin >> x;
        def += x;
    }
    sort(s.begin(), s.end());
    int dr; cin >> dr;
    while(dr--) {
        int a, b;
        cin >> a >> b;
        int x = lower_bound(s.begin(), s.end(), a) - s.begin();
        int need = 0, curDef, ans;
        if(x == n) {
            need = a - s[n-1];
            curDef = def - s[n-1];
            ans = need + max(b - curDef, 0LL);
        }
        else if(x > 0) {
            /*
            if(def - s[x] >= b) {
                cout << "0\n";
                continue;
            }
            */
            int d = a - s[x-1];
            int def1 = def -s[x];
            int def2 = def - s[x-1];
            ans = min(max(b - def1, 0LL), max(b - def2, 0LL) + d);
        }
        else {
            ans = max(0LL, b - (def - s[x]));
        }
        cout << ans << '\n';
    }
}

