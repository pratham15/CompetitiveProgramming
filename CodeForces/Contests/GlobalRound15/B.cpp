#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while(T--) {
        int n; cin >> n;
        vector<vector<pair< int, int>>> a(5, vector<pair<int, int>> (n));
        for(int i = 0; i < n; ++i) {
            for(int j = 0; j < 5; ++j) {
                cin >> a[j][i].first;
                a[j][i].second = i;
            }
        }
        sort(a.begin(), a.end(), [&]();
        for(auto x : a) {
            for(auto y : x) cout << "[ " << y.first << ' ' << y.second << ' ' << " ] ";
            cout << '\n';
        }
        for(int i = 0; i < 5; ++i)
            cout <<  "[ " << a[i].back().first << ' ' << a[i].back().second << ' ' << " ] ";

        vector<int> freq(5, 0);
        int ans = -1;
        for(int i = 0; i < 5; ++i) if(freq[i] >= 3) {ans = -1; break;}
        cout << ans << '\n';
    }
}


