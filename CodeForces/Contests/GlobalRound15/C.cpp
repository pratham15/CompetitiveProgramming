#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    auto comp = [] (pair<int, int> a, pair<int, int> b) -> bool {
        if(a.first > b.first) swap(a,b);
        return(a.second > b.first and a.second < b.second);
    };
    while(t--) {
        int current=0;
        int n, k; cin >> n >> k;
        vector<pair<int, int>> a;
        a.reserve(2*n+1);
        vector<bool> used(2*n+1);
        for(int i = 1; i <= k; ++i) {
            int x, y; cin >> x >> y;
            used[x] = used[y] = 1; 
            if(x>y) swap(x, y);
            a.push_back({x,y});
        }
        vector<int> left;
        for(int i = 1; i <= 2*n; ++i) 
            if(!used[i]) left.push_back(i);
        for(int i = 0; i < n-k; ++i) 
            a.push_back({left[i], left[i+n-k]});
            
        int ans = 0;
        for(int i = 0; i < n; ++i) {
            for(int j = i+1; j < n; ++j) 
                ans += comp(a[i], a[j]);
        }
        cout << ans << '\n';
    }
}

