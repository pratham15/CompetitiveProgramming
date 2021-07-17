#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        vector<int> bitmask(33, 0);
        vector<int> a(n); 
        for(auto &x : a){
            cin >> x;
            for(int i = 0; i <= 32; ++i){
                if(x&1) bitmask[i]++;
                x >>= 1;
            }
        }
        int64_t ans = 0;
        for(auto x : bitmask) 
            ans += (x + k - 1) / k;
        cout << ans << '\n';
    }
}


