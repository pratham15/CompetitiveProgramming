#include<bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
    int n, M;
    cin >> n >> M;
    multiset<int, greater<int>> t;
    vector<int> a(n);
    for(auto &x : a) cin >> x;
    int64_t totalSoFar = 0;
    for(int i = 0; i < n; ++i){
        if(totalSoFar + a[i] <= M){
            cout <<"0 ";
            totalSoFar += a[i];
            t.insert(a[i]);
            continue;
        }
        int64_t k = M - a[i];
        int cnt = 0;
        int64_t newCount = totalSoFar;
        for(auto x : t){
            newCount -= x;
            cnt++;
            if(newCount <= k) {
                cout << cnt << ' ';
                t.insert(a[i]);
                totalSoFar += a[i];
                break;
            }
        }
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

