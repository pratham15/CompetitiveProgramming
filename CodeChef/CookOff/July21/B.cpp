#include<bits/stdc++.h>
using namespace std;
#define int int64_t
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while(T--) {
        int n; cin >> n;
        vector<int> a(n);
        vector<int> freq(33, 0); 
        for(auto &x : a) {
            cin >> x;
            for(int i = 0; i < 33; ++i) 
                if(1 & (x >> i))freq[i]++; 
        }
        int ans = 0, total = 0;
        for(int i = 0; i < 33; ++i) 
            if(freq[i] == n)
                ans |= (int)pow(2,i);
        for(int i = 0; i < n; ++i) 
            a[i] = (a[i] ^ ans);
        for(int i = 0; i < n; ++i) total |= a[i];
        cout << ans << ' ' << total << '\n';
    }
}
