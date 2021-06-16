#include<bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

#define int int64_t
void solve(){
    int n;
    cin >> n;
    n+=2;
    vector<int> a(n);
    int64_t s = 0;
    for(auto &x : a) { cin >> x; s+=x; }
    sort(a.begin(), a.end());
    if(s - a[n-1] - a[n-2] == a[n - 2]) {
        for(int i = 0; i < n-2; ++i) cout << a[i] << ' ';
        cout << "\n";
        return;
    }
    s -= a[n-1];
    multiset<int> boomchik;
    for(int i = 0; i < n - 1; ++i) boomchik.insert(a[i]);
    if (boomchik.find(s - a[n-1]) != boomchik.end()){
        boomchik.erase(boomchik.find(s - a[n-1]));
        for(auto x : boomchik) cout << x << ' ';
        cout << '\n';
        return;
    }
    cout << "-1\n";
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    t = 1;
    cin >> t;
    while(t--) solve();
}

