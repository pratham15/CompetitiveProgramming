#include<bits/stdc++.h>
using namespace std;
#define int int64_t
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    vector<string> pw;
    for(int64_t i = 1; i <= (int64_t) 2e18; i*= 2) 
        pw.push_back(to_string(i));

    auto dp = [](string a, string b) {
        int as, bs, c = 0;
        as = bs = c;
        while(as < a.length() && bs < b.length()) {
            if(a[as] == b[bs]) c++, bs++;
            as++;
        }
        return int(a.length() +  b.length() - 2 * c);
    };
    int t;
    cin >> t;
    while(t--) {
        string n;
        cin >> n;
        int ans = 1e9;
        for(auto x : pw) {
            ans = min(ans, dp(n, x));
        }
        cout << ans << '\n';
    }
}

