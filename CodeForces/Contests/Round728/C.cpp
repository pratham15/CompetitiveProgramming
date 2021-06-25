#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int64_t n; cin >> n;
        vector<int64_t> a(n), negTotal(n); for(auto &x : a) cin >> x; sort(a.begin(), a.end());
        int64_t totalSoFar = 0;
        for(int64_t i = 1; i < n; ++i) totalSoFar += a[i] - a[i-1];
        for(int64_t i = 1; i < n; ++i) {
            negTotal[i] = negTotal[i - 1] + (a[i] - a[i-1]) * i;
            totalSoFar -= negTotal[i];
        }
        cout << totalSoFar << '\n';
    }
}


