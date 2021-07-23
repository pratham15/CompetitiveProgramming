#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n; cin >> n;
    vector<int64_t> a(n); int64_t s = 0;
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        if(i>0) a[i] += a[i-1];
    }
    int64_t ans = 0, x = 0;
    for(int i = 0; i < n-1; ++i) {
        if(a[i]*3 == a[n-1]*2) ans += x;
        if(a[i] * 3 == a[n-1]) x++;
    }
    cout << ans;
}

