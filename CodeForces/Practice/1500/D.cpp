#include<bits/stdc++.h>
using namespace std;
#define int int64_t
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<pair<int, int>> a;
    for(int i = 0;i < n; ++i) {
        pair<int, int> x;
        cin >> x.first >> x.second;
        a.push_back({x.first, 1});
        a.push_back({x.second + x.first, -1});
    }
    sort(a.begin(), a.end());
    //cout << "\n";
    //for(auto &x : a) cout << x.first << ' '<< x.second << '\n';
    //cout << "\n";
    map<int, int> mp;
    int cur = 0;
    for(int i = 0; i < a.size()-1;) {
        int j = i + 1;
        cur  += a[i].second;
        while(j< n && a[j].first == a[i].first) {
            cur += a[j].second;
            j++;
        }
        //cout << cur << ' ' << i << " "  << j << '\n';
        mp[cur] += a[j].first - a[i].first;
        i = j;
    }
    for(int i = 1; i <= n; ++i) cout << mp[i] << ' ';
}

