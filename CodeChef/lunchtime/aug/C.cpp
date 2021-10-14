#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for(auto &x : a) cin >> x;
        int x = *max_element(a.begin(), a.end());
        int64_t ans = 0;
        for(int i = 0; i < n; ++i) 
            if(i+1 >= k && a[i] == x) ans += (n-i);
        cout << ans << '\n'; 
    }
}

