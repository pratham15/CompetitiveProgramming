#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--) {
        int64_t n, x, t;
        cin >> n >> x >> t;
        int64_t v = min(n-1, t/x); 
        if( v == 0) cout << "0\n";
        else {
            cout << v*(n - v) + max(0LL, v*(v-1)/2) << '\n';
        }
    }
}

