#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, q, k;
    cin >> n >> q >> k;
    vector<int> a(n);
    for(auto &x : a) cin >> x;
    a.insert(a.begin(), 0);
    a.push_back(1e9);
    vector<int64_t> ans(n);
    for(int i = 0; i < n-1; ++i){
        ans[i] = a[i+1] - a[i] - 1;
        ans[i] += a[i+2] - a[i+1] - 1;
        if(i>=1) ans[i] += ans[i-1]; 
    }
    for(auto x : ans) cout << x << ' ';
    cout << '\n';
    while(q--){
        int l, r;
        cin >> l >> r;
        int64_t t = ans[r-1] - ans[l-1];
        cout << ans[r-1] << ' ' << ans[l] << '\n';
        cout << t << '\n';
    }
}

