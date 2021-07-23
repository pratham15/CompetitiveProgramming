#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int T; cin >> T;
    while(T--) {
        int n, m; cin >> n >> m;
        vector<int> friends(n), presents(m);
        vector<int> cp(m);
        cp = presents;
        for(auto &x : friends) cin >> x;
        for(auto &x : presents) cin >> x;
        sort(friends.rbegin(), friends.rend());
        int64_t ans = 0;
        int i = 0;
        for(auto x : friends) {
            if(presents[i] < presents[x-1]){
                ans += presents[i];
                i++;
            }
            else ans += presents[x-1];
        }
        cout << ans << '\n';
    }
}

