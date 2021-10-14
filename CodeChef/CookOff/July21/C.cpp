#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    map<int, int> mp;
    while(T--) {
        mp.clear();
        int n, ans;
        cin >> n; ans = 0;
        for(int i =0; i < n; ++i) {
            int x; cin >> x; 
            mp[x]++;
        }
        for(auto y : mp){
            if(y.second >= y.first - 1) ans += y.first - 1;
            else ans += y.second;
        }
        cout << ans << '\n';
    }
}

