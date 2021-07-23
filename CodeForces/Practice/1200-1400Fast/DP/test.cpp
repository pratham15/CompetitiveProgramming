#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int T; cin >> T;
    while(T--) {
        int64_t n, o = 0, e = 0; cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; ++i) {
            int x; cin >> x;
            if(i&1) o += x;
            else e+= x;
            a[i] = x;
        }
        int i = 0;
        if(o>e) i = 1;
        for(int j= 0; j < n; ++j) 
            if(j%2 == i) cout << a[j] << ' ';
            else cout << 1 << ' ';
        cout << '\n';
    }
}

