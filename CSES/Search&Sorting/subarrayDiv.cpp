#include<bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
#define int int64_t
void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    int64_t s = 0;
    vector<int> mp(n,0);
    for(auto &x : a){
        cin >> x;
        s+=x;
        mp[(s%n + n) % n]++;
    }
    auto ans = [&](){
        int64_t ans =  0;
        for(int i = 0; i < n; ++i)
            if(mp[i] > 1) ans += (mp[i] * (mp[i]-1))/2;
        ans += mp[0];
        return ans;
    };
    cout << ans() << '\n';
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();
}

