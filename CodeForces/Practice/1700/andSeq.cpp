#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7; 
#define int int64_t
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int mini = 1e9;
        vector<int> a(n); for(auto &x : a){ cin >> x; mini = min(x, mini); }
        int ans = 0;
        bool b = false;
        for(auto &x : a) 
            if((mini & x) != mini){
                cout << "0\n"; 
                b = true;
                break;
            }
            else if (mini == x) ans++;
        if (b) continue;
        int fact = 1;
        for(int i = 1; i <= n-2; ++i) fact = 1LL * fact * i % mod;
        ans = 1LL * (ans * (ans-1)) %mod;
        ans = 1LL * ans * fact % mod;
        cout << ans << '\n';
    }
}

