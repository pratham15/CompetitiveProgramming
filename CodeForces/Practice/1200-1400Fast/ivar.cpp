#include<bits/stdc++.h>
using namespace std;

#define int int64_t
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, q;
    cin >> n >> q;
    vector<int> sld(n), arr(q);
    for(auto &x: sld) cin >> x;
    for(auto &x :arr) cin >> x;
    for(int i = 1; i < n; ++i) sld[i] += sld[i-1];

    int64_t dedSoFar = 0;
    for(int i = 0; i < q; ++i) {
        dedSoFar += arr[i];
        int x = lower_bound(sld.begin(), sld.end(), dedSoFar) - sld.begin();
        if(x == n) {
            cout << n << "\n";
            dedSoFar = 0;
            continue;
        }
        
        if(dedSoFar == sld[x]) {
            if(x == n-1) {
                dedSoFar = 0;
                cout << n << "\n";
                continue;
            }
            else cout << n - 1 - x << '\n';
        }
        else cout << n - x << '\n';
    }

}

