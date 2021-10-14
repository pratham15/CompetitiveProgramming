#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> a(n); for(auto &x : a) cin >> x;
        int ans = 1e9;
        vector<int> odd;
        for(int i = 0; i < n; ++i) 
            if(a[i] % 2 == 1) odd.push_back(i);

        for(int i : {0, 1}) {
            int res = 0; vector<int> b;
            for(int j = i; j < n; j += 2) 
                b.push_back(j);
            if(b.size() == odd.size()) {
                for(int j = 0; j < odd.size(); j ++)
                    res += abs(b[j] - odd[j]);
                ans = min(ans, res);
            }
        }
        cout << (ans == 1e9 ? -1 : ans) << '\n';    
    }
}
