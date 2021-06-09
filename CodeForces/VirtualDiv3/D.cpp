#include<bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for(auto &x : a) cin >> x;
    for(auto &x : b) cin >> x;
    vector<int> ans(n);
    for(int i = 0; i < n; ++i){
        ans[i] = a[i] - b[i];
    }
    sort(ans.begin(), ans.end());
//    for(auto x : ans) cout << x << ' ';
  //  cout << '\n';
    int64_t cnt = 0;
    for(int i = 0; i < n; ++i){
        if(ans[i]<= 0) continue;
        cnt += i - (lower_bound(ans.begin(), ans.end(), -ans[i]+1) - ans.begin()); 
//        cout << cnt << '\n';
    }         
    cout << cnt << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();
}

