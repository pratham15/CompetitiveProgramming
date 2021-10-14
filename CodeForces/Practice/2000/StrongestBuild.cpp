#include<bits/stdc++.h>
using namespace std;
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin >> n;
    vector<int> items[n];
    vector<int> mx(n+1);
    for(auto &x : items) {
        int y;
        cin >> y;
        x.resize(y);
        for(auto &i: x) cin >> i;
    }
    for(int i = 0; i < n; ++i) {
        mx[i] = items[i].size();
        mx[n] += items[i].back();
    }
    auto cmp = [&](const auto &a, const auto &b) {
        return a.back() > b.back();
    };
    set<vector<int>, decltype(cmp)> builds(cmp);
    set<vector<int>> banned, processed;
    builds.insert(mx);
    cin >> m;

    while(m--) {
        vector<int> build(n+1);
        for(int i = 0; i < n; ++i){
            cin >> build[i];
            build[n] += items[i][build[i]-1];
        }
        banned.insert(build);
    }
    while(true){
        auto build = *builds.begin();
        builds.erase(builds.begin());
        if(processed.count(build) > 0) continue;
        if(banned.count(build) == 0){
            for(int i = 0; i < n; ++i)
                cout << build[i] << ' ';
            cout << '\n';
            break;
        }
        int ttl = build[n];
        for(int i = 0; i < n; ++i) {
            if(build[i] > 1){
                build[i]--;
                build[n] -= items[i][build[i]] - items[i][build[i]-1];
                builds.insert(build);
                build[i]++;
                build[n] = ttl;
            }
        }
    }
}


