#include<bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &x : a) {
        cin >> x;
        x--;
    }
    vector<vector<int>> uni(n);
    for(int i = 0; i < n; ++i){
        int x;
        cin >> x;
        if(uni[a[i]].empty()) uni[a[i]].push_back(0);
        uni[a[i]].push_back(x);
    }
    for(int i = 0; i < n; ++i){
        sort(uni[i].begin(), uni[i].end());
        if(uni[i].size())
        reverse(uni[i].begin() + 1, uni[i].end());
    }
    for(auto x : uni){
        for(auto y : x) cout << y << ' ';
        cout << '\n';
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    t = 1;
    cin >> t;
    while(t--) solve();
}

