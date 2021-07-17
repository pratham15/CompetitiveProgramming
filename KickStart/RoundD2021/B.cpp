#include<bits/stdc++.h>
using namespace std;
#define int int64_t
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    int k = 1;
    while(t--) {
        cout << "Case #" << k << ": ";
        int n, c;
        cin >> n >> c;
        vector<pair<int, int>> a;
        for(int i = 0; i < n; ++i) {
            int x, y; cin >> x >> y;
            a.push_back({x + 1, 1});
            a.push_back({y, -1});
        }
        sort(a.begin(), a.end());
        int prv = -1, variation = 0;
        vector<pair<int, int>> freq;
        for(auto x : a) {
            if(prv != x.first){
                freq.push_back({variation, x.first - prv});
                prv = x.first;
            }
            variation += x.second;
        }
        sort(freq.begin(), freq.end());
        int res = n;
        while(!freq.empty() && c){
            int k = min(freq.back().second, c);
            c -= k;
            freq.back().second-= k;
            res += k * freq.back().first;
            if(freq.back().second== 0)
                freq.pop_back();
        }
        cout<<res<<'\n';
    }
}

