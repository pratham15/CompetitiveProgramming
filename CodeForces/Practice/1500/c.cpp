#include<bits/stdc++.h>
using namespace std;
#define int int64_t
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin >> s;
    int n = pow(2,s.size());
    int64_t ans = 0;
    int64_t cnt = 0;
    for(int i = 0; i <= n; ++i){
        string a, b;
        for(int j = 0; j < s.size(); ++j) {
            if(i & (1 << j)) a += s[j];
            else b += s[j];
        }
        if(a.size() == 0 || b.size() == 0) continue;
        sort(a.rbegin(), a.rend());
        sort(b.rbegin(), b.rend());
        int x = stoi(a);
        int y = stoi(b);
        if(x*y > ans) {
            ans = x * y;
            cout << x << " " << y << '\n';
        }
        cnt++;
    }

    cout << ans <<'\n';
}

