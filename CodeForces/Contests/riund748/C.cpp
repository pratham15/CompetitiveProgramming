#include<bits/stdc++.h>
using namespace std;
#define int int64_t
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        map<int, int> a;
        for(int i = 0; i < k; ++i) {
            int x;
            cin >> x;
            a[x]++;
        }
        vector<pair<int, int>> pos;
        for(auto [x, y]: a) 
            pos.push_back({x, y});
        int sz = pos.size();
        int curCat = 0, ans = 0;
        for(int i = sz-1; i >= 0; --i) {
           if(pos[i].first <= curCat) break; 
           while(pos[i].second--) {
                if(curCat >= pos[i].first) break;
                curCat += n - pos[i].first;
                ans++;
           }
        }
        cout << ans << '\n';
    }
}

