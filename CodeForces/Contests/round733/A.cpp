#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while(T--) {
       string s; cin >> s;
       int n = s.size();
       vector<int> a(n);
       for(int i = 0; i < n; ++i){
            a[i] = s[i] - '0';
       }
       int ans = 0;
       for(int i = 0; i < n; ++i) ans = max(ans, a[i]);
       cout << ans << '\n';
    }
}

