#include<bits/stdc++.h>
using namespace std;

#define int int64_t
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, k, x;
    cin >> n >> k >> x;
    vector<int> a(n), diff;
    for(auto &x : a) cin >> x;
    sort(a.begin(), a.end());
    for(int i = 1; i < n; ++i) 
        if(a[i] - a[i-1] > x) diff.push_back((a[i] - a[i-1] - 1) / x);
    sort(diff.rbegin(), diff.rend());
    while(diff.size() >= 1) {
            if(diff.back() > k) break;
        k-= diff.back();
        diff.pop_back();
    }
    cout << diff.size() +1 << '\n';



}
