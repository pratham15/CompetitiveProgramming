#include<bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> a(n);
    for(auto &[x,y] : a) cin >> x >> y;
    sort(a.begin(), a.end(), [&](pair<int, int> &a, pair<int, int> &b) {
            return a.second < b.second;
            });
    deque<int> 
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();
}

