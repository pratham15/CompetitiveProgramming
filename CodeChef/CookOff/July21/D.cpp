#include<bits/stdc++.h>
using namespace std;

#define int int64_t
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while(T--) {
        int n; cin >> n;
        multiset<int> mp;
        for(int i =0; i < n; ++i){
            int x; cin >> x;
            mp.insert(x);
        }
        if(n==1) {
            cout << "0\n";
            continue;
        }
        int x = *mp.begin();
        auto it = mp.lower_bound(x+1);
        if(it == mp.end()) cout << 0 << '\n';
        else if(*it >= (2*x + 1)) cout << n - mp.count(x) << '\n';
        else cout << n << '\n';
    }
}

