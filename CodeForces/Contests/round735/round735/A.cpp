#include<iostream>
#include<vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int T; cin >> T;
    while(T--) {
        int n; cin >> n;
        vector<int64_t> a(n);
        for(auto &x : a) cin >> x;
        int64_t ans = 0;
        for(int i = 1; i < n; ++i) 
            ans = max(ans, a[i] * a[i-1]);
        cout << ans << '\n';
    }
}

