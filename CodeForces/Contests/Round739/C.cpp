#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    vector<int64_t> a;
    int64_t k = 1;
    int64_t i = 1;
    while(k <= 1e9 + 1e8 ) {
       a.push_back(k);
       i += 2;
       k += i;
    }
    cin >> t;
    while(t--) {
        int n; 
        cin >> n;
        int x = lower_bound(a.begin(), a.end(), n) - a.begin();
        int m = n - a[x-1] + 1;
        cout << m << '\n';
        if( m <= x) cout << m << ' ' << x << '\n';
        else cout << x << ' ' << 2*x - m << '\n';
       
    }

}

