#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
           int n;
           cin >> n;
           map<int, int> a;
           for(int i = 0; i < n; ++i) {
               int x; cin >> x;
               a[x]++;
           }
           if(n <= 2) {
               cout << "0\n";
               continue;
           }
           int mx = 0;
           for(pair<int, int> y: a) {
               mx = max(mx, y.second);
           }
           cout << min(n-2, n - mx) << '\n';
    }
}

