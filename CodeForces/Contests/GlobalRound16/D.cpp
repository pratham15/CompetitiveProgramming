#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        vector<pair<int, int>> a(n*m);
        for(int i = 0; i < n*m; i++) 
            cin >> a[i].first, a[i].second = i;

        sort(a.begin(), a.end());
        int total = 0;
        for(int i = 0; i < n; ++i) {
            vector<pair<int, int>> b (a.begin() + i*m, a.begin() + i*m + m);
            for(auto &x : b) x.second = -x.second;
            sort(b.begin(), b.end()); 
            //for(auto x: b) cout << x.first << ' '<< x.second << '\n';
            for(int j = 0; j < m; ++j) 
                for(int k = 0; k < j; ++k)
                    if(b[k].second > b[j].second) total++;
           
        }
        cout << total << '\n';
    }
}

        

