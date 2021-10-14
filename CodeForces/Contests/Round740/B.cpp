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
        vector<int> a[n];
        for(auto &x : a) {
            int k; cin >> k;
            for(int i = 0; i < k; ++i) {
                int j; cin >> j;
                x.push_back(j);
            }
        }
        vector<pair<int, int>> caves(n);
        for(int i = 0; i < n; ++i){
            int cur = 0, pw = 1;
            for(int j = 0; j < a[i].size(); ++j){
                if(a[i][j] - cur >= pw) pw = a[i][j] - cur + 1;
                cur++;
            }
            caves[i] = {pw, i};
        }
        sort(caves.begin(), caves.end());

        int cur = 0, pw = 1;
        for(int i = 0; i < n; ++i) {
            int k = caves[i].second;
            for(int j = 0; j < a[k].size(); ++j) {
                if(a[k][j] - cur >= pw) pw = a[k][j] - cur + 1;
                cur++;
            }
        }
        cout << pw << '\n';
    }
}

