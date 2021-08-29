#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> a(n), b(n-1);
        for(auto &x : a) cin >> x;
        for(auto &x : b) cin >> x;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        if(n == 2) {
            if(a[1] < b[0]) cout << b[0] - a[1] << '\n';
            else cout << b[0] - a[0] << '\n';
            continue;
        }
        set<int> y;
        for(int i = 0; i < n-1; ++i) 
            y.insert(b[i] - a[i+1]);

        if(y.size() == 1 && *y.begin() > 0) 
            cout << *y.begin() << '\n';
        else cout << b[0] - a[0] << '\n';
    }
}

