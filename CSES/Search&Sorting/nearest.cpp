#include<bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &x : a) cin >> x;
    vector<pair<int, int>> s;
    s.push_back({0,0});
    for(int i = 0; i < n; ++i){
        while(!s.empty()) 
            if(s.back().first >= a[i]) s.pop_back();
            else break;
        cout << s.back().second << ' ';
        s.push_back({a[i], i+1});
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();
}

