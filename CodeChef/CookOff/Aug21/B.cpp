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
        vector<string>  a(n); for(auto &x : a) cin >> x;
        set<int> s;
        for(auto x : a) {
            int ne = 0;
            for(int i = 0; i < n; ++i) 
                if(x[i] == '1') ne |= (1 << i);
            s.insert(ne);
        }
        int ans = 0;
        for(auto x : s) {
            if(ans != x) break;
            else ans++;
        }
        char k[n];
        for(int i = 0; i < n; ++i) {
            if(1 & (ans >> i)) k[i] = '1';
            else k[i] = '0';
        }
        for(auto x : k) cout << x;
        cout << '\n';
    }

}

