#include<bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(auto &x : a) cin >> x;
    map<int, int>mp;
    int l = 0, cnt = 0;
    int64_t ans = 0;
    for(int i = 0 ; i < n; ++i){
        if(mp[a[i]] == 0) cnt++;
        mp[a[i]]++;
        if(cnt > k) 
                while(cnt > k){
                    mp[a[l]]--;
                    if(mp[a[l++]] == 0) cnt--;
                }
        
        ans += i-l + 1;
    }
    cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();
}

