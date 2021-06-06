#include<bits/stdc++.h>
using namespace std;
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());

int n, m, p;
int mx = -1; //For highest possible common bits

string understand(int person, string ans, vector<int64_t> &a){
    vector<int> bitSet;
    for(int j = 0; j < m; ++j)
        if((a[person] >> j) & 1) bitSet.push_back(j);
    vector<int> freq(1 << bitSet.size(),0);
    for(int i = 0; i < n; ++i){
        int mask = 0, bit = 1;
        for(auto x : bitSet){
            if((a[i] >> x) & 1) mask |= bit;
            bit *= 2;
        }
        freq[mask]++;
    }
    vector<int> cnt((1 << bitSet.size()), 0);
    for(int m = 0; m <(1 << bitSet.size()); ++m){
       for(int s = m; s; s=(s-1)&m){
            cnt[s] += freq[m];
       }
   }
   for(int mask = 0; mask < (1<<bitSet.size()); ++mask){
        if(cnt[mask] < (n+1)/2) continue;
        if(__builtin_popcount(mask) <= mx) continue;
        mx = __builtin_popcount(mask);
        ans = string(m, '0');
        for(int bit = 0; bit < p; ++bit){
            if((mask)&(1<<bit))
                ans[bitSet[bit]] = '1';
        }
    }
    return ans;
}


void solve(){
    cin >> n >> m >> p;
    vector<int64_t> a(n);
    for(auto &x : a){
        string s;
        cin >> s;
        for(int i = 0; i < m; ++i) 
            if(s[i] == '1') x |= (1LL << i);
    }
    string ans(m, '0');
    for(int i = 0; i < 20; ++i)
        ans = understand(rng() % n, ans, a);
    cout << ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();
}

