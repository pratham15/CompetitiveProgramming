#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n; cin >> n;
        string s;
        cin >> s;
        reverse(s.begin(), s.end());
        int ans = 0;
        for(int i = 0; i < n; ++i) {
            if(i == 0) ans += s[i] - '0';
            else ans += (s[i] - '0' == 0 ? 0 : s[i] - '0' + 1);
        }
        cout << ans << '\n';
    }
}

