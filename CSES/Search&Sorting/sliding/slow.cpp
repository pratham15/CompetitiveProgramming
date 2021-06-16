#include<bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
    int n;int k;
    cin >> n >> k;
    vector<int> a(n);
    for(auto &x : a) cin >> x;
    int64_t ans = 0;
    for(int i = 0; i < n-k+1; ++i){
        ans = 0;
        vector<int> b;
        for(int j = i; j < i+k; ++j){
            b.push_back(a[j]);
        }
        sort(b.begin(), b.end());
        if(k%2 == 0) {
            for(int j = 0; j < k/2; ++j) ans -= b[j];
            for(int j = (k/2) + 1; j < k; ++j) ans += b[j];
        }
        else {
            for(int j = 0; j < k; ++j) {
                ans += abs(b[j] - b[k/2]);
            }
        }
        cout << ans << ' ';
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    freopen("in.txt", "r", stdin);
    freopen("slowTest.txt", "w", stdout);
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();
}

