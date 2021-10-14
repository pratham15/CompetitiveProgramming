#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> a(2*n + 10), b(n);
        for(int i = 0; i < n; ++i) {
            int x; cin >> x;
            a[x] = i;
        }
        for(auto &x :b) cin >> x;
        for(int i = 3; i <= 2*n; i += 2) 
            if(a[i] > a[i-2]) a[i] = a[i-2];
        int ans = 1e9;
        //for(auto x: a) cout << x << ' ';
        for(int i = 0; i < n; ++i) 
            ans = min(ans, i + a[b[i] - 1]);
        cout << ans << '\n';
    }
}

