#include<bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
bool compare (pair<int, int> &a, pair<int, int> &b){
    return a.second - a.first > b.second - b.first;
}
void solve(){
    int n;
    cin >> n;
    vector<pair<int, int>> a(n);
    for(auto &[x,y] : a) cin >> x >> y;
   
    sort(a.begin(), a.end());
    int64_t t = 0, ans = 0;
    for(int i = 0; i < n; ++i){
        t += a[i].first;
        ans += a[i].second - t;
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

