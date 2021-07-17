#include<bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
    int n, m, x;
    cin >> n >> m >> x;
    set<pair<int, int>> a;
    for(int i = 0; i < m; ++i){
        a.insert({0, i});
    }
    vector<int> ans(n);
    for(int i = 0; i < n; ++i){
        int x;
        cin >> x;
        pair<int, int> y = *a.begin();
        ans[i] = y.second + 1;
        y.first += x;
        a.erase(a.begin());
        a.insert(y);
    }
    cout << "YES\n";
    for(auto x : ans) cout << x << ' ';
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    t = 1;
    cin >> t;
    while(t--) solve();
}

