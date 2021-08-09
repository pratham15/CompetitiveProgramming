#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> a(n);
        for(auto &x : a) cin >> x;
        sort(a.begin(), a.end());
        long double total = 0;
        for(int i = 0; i < n-1; ++i) total += a[i];
        long double total2 =  a[n-1];
        total2 += total / (n-1);
        cout << setprecision(9) << total2 << '\n';
    }
}

