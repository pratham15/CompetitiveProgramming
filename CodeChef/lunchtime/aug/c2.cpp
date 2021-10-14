#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> a(n);
        for(auto &x : a) cin >> x;
        
        vector<int> p(n), s(n);
        p[0] = a[0], s[n-1] = a[n-1];

        for(int i = 1; i < n; ++i) p[i] = max(p[i-1], a[i]);
        for(int i = n-2; i >= 0; --i) s[i] = max(s[i+1], a[i]);
    
        bool g = false;
        for(int i = n-1; i >= 0; --i) {
            if(s[i] > p[i]) { g = true; break; }
        }
        if(g) {
            cout << "-1\n";
            continue;
        }

        int ans = 0;
        for(int i = n-1; i >= 1;) {
            int j = i;
            while(s[i] == s[j]) j--;
            i = j;
            ans++;
        }
        cout << ans << '\n';
    }
}
