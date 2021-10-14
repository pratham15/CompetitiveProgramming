#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n; cin >> n;
    vector<vector<int>> a(n);
    for(int i = 0; i < n; ++i){
        int x;
        cin >> x;
        while(x--) {
            int k; cin >> k;
            a[i].push_back(k);
        }
    }

    int m; cin >> m;
    vector<vector<int>> banned(m, vector<int> (n));
    for(auto &x: banned)
        for(auto &y : x) cin >> y;

    sort(banned.rbegin(), banned.rend());
    cout << "\n\n";
    for(auto x : banned){
        for(auto y: x) cout << y << ' ';
        cout << "\n";
    }

    int x = lower_bound(banned.begin(), banned.end(), banned[0]) - banned.begin();
}

