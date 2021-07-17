#include<bits/stdc++.h>
using namespace std;
#define int int64_t
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<pair<int, int>> a(n); 
        for(int i = 0 ; i < n; ++i){
            cin >> a[i].first;
            a[i].second = i+1;
        }
        sort(a.begin(), a.end());
        int64_t ans = 0;
        for(int64_t i = 0; i < n - 1; ++i){
            for(int64_t j = i+1; j < n; ++j){
                if(a[i].first * a[j].first == a[i].second + a[j].second ) ans++;
                if(a[i].first * a[j].first > n + n - 1) break;
            }
        }
        cout << ans << '\n';
    }
}

