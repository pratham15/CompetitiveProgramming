#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int64_t> a(n), r(n), l(n);
        for(auto &x : a) cin >> x;
        sort(a.begin(), a.end());
        int64_t s = accumulate(a.begin(), a.end(), 0LL);
        if(n==1) {cout << "1\n"; continue;}
        if(n==2) {cout << "2\n"; continue;}
        l[0] = a[0], r[n-1] = a[n-1];
        for(int i = 1; i < n; ++i) l[i] = __gcd(a[i], l[i-1]);
        for(int i = n-1; i>=0; --i) r[i] = __gcd(a[i], r[i+1]);
        int64_t ans = 1e18;
        for(int i = 0; i < n; ++i){
            int64_t mini;
            if(i==0) mini = r[1];
            else if(i==n-1) mini = l[n-2];
            else mini = __gcd(l[i-1], r[i+1]);
            ans = min(ans, (s - a[i]) / mini + 1);
        }
        cout << ans << '\n';
    }
}
