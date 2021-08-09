#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int k, n;
        cin >> n >> k;
        vector<int> a(n);
        set<int> s;
        for(auto &x : a) {
            cin >> x;
            s.insert(x);
        }
        int cnt = 1;
        for(int i = 0; i < n-1; ++i) {
            auto it = s.lower_bound(a[i]+1);
            if(it == s.end()) { cnt++; }
            else if( *it != a[i+1]) {cnt++;}
        }
        if(cnt <= k) cout << "Yes\n";
        else cout << "No\n";
    }

}

