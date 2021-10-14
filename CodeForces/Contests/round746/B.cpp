#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n, x;
        cin >> n >> x;

        vector<int>a(n), b(n);
        for(auto &x : a) cin >> x;
        b = a;
        sort(b.begin(), b.end());
        bool g = true;
        for(int i = 0; i < n; ++i) {
            if(a[i] == b[i]) continue;
            if(i >= x || (n - 1 - i) >= x) continue;
            g = false;
        }
        cout << (g ? "Yes\n" : "No\n");
    }
}

