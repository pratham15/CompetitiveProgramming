#include<bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
    int n;
    cin >> n;
    vector<int> even, odd;
    for(int i = 0; i < n; ++i){
        int k;
        cin >> k;
        if(k&1) odd.push_back(k);
        else even.push_back(k);
    }
    vector<int> a;
    int64_t ans = 0;
    for(auto x : even) a.push_back(x);
    for(auto x : odd) a.push_back(x);
    for(int i = 0; i < n; ++i){
        if(a[i]%2==0) ans += n-1-i;
        else {
            for(int j = i+1; j < n; ++j){
                if(__gcd(a[i], a[j]) > 1) ans++;
            }
        }
    }
    cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    t = 1;
    cin >> t;
    while(t--) solve();
}

