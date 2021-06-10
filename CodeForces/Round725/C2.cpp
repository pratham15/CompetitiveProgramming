#include<bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
    int n, l, r;
    cin >> n >> l >> r;
    vector<int> a(n); for(auto &x : a) cin >> x;
    sort(a.begin(), a.end());
    auto cntBelow = [&] (int x) {
        int64_t total = 0;
        for(int i =0, j = n-1; i< j; i++){
            while(j>i && a[i] + a[j] > x) j--;
            total += max(j-i, 0);
        }
        return total;
    };
    cout << cntBelow(r) - cntBelow(l-1) << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    t = 1;
    cin >> t;
    while(t--) solve();
}

