#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    auto low = [](int x){
        return (x*(x+1)) / 2;
    };
    auto high = [](int x, int n){
        return x*(2*n+1-x) / 2;
    };
    while(t--){
        int n, l, r, s;
        cin >> n >> l >> r >> s;
        int mn = low(r-l+1);
        int mx = high(r-l+1, n);
        if( s < mn || s > mx) {
            cout << "-1";
            cout << "\n";
            continue;
        }
        set<int> ans, comp;
        int d = r - l + 1;
        for(int i = n; i > 0; --i) 
            if(high(d, i) >= s && low(d-1) <= s-i){
                ans.insert(i);
                s-=i;
                d--;
            }
        for(int i = 1; i <=n; ++i){
            if(ans.count(i) == 0) comp.insert(i);
        }
        for(int i = 1; i < l; ++i) {
            cout << *comp.begin() << ' ';
            comp.erase(comp.begin());
        }
        for(auto x : ans) cout << x << ' ';
        for(int i = r+1; i <= n; ++i){
            cout << *comp.begin() << ' ';
            comp.erase(comp.begin());
        }
        cout << '\n';
    }
}

