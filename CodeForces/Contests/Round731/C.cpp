#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int k, n, m;
        cin >>  k >> n >> m;
        if( n < m) swap(n, m);
        vector<int> a(n), b(m);
        for(auto &x : a) cin >> x;
        for(auto &x : b) cin >> x;
        vector<int> ans;
        bool cont = false;
        int l = 0, r = 0;
        for(int i = 0; i <max(n, m); ++i){
            if(l< n && a[l] <= k){
                if(a[l] == 0) k++;
                l++;
                ans.push_back(a[l]);
            }
            else if( r < m && b[r] <= k){
                if(b[r] == 0) k++;
                r++;
                ans.push_back(b[r]);
            }
            else {cout << "-1\n"; cont = true; break;}
        }
        if(cont) continue;
        for(auto x : ans) cout << x << ' ';
        cout << '\n';
    }
}

