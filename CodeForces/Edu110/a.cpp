#include<bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
    vector<int> a(4), b;
    for(auto &x : a) cin >> x;
    if(a[0] < a[1]) b.push_back(a[1]);
    else b.push_back(a[0]);

    if(a[2] < a[3]) b.push_back(a[3]);
    else b.push_back(a[2]);
    sort(b.begin(), b.end());
    sort(a.begin(), a.end());
    if(a[3] == b[1] && a[2] == b[0]) cout << "YES\n";
    else cout << "NO\n";

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    t = 1;
    cin >> t;
    while(t--) solve();
}

