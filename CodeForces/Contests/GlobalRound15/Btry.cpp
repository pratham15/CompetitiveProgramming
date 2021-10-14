#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while(T--) {
        int n; cin >> n;
        vector<array<int, 5>> a(n);
        vector<array<int, 5>> c(n);
        for(int i = 0; i < n; ++i){
            for(auto &x : a[i]) cin >> x;
            c[i] = a[i];
        }
        sort(a.begin(), a.end(),[&](array<int, 5> &f, array<int, 5> &s) {
                int l = 0,r  = 0;
                for(int i = 0; i < n; ++i) {
                    if(f[i] < s[i]) l++;
                    else r++;
                    }
                return l > r;
                }
            );
        /*
        for(auto x : a){
            for(auto y : x) cout << y << ' ';
            cout << '\n';
        }
        */
        bool b = false;
        int ind = -1;
        if(a[0] == c[0]) ind = 1;
        for(int i = 0; i < n; ++i) {
            int l = 0, r = 0, sm = 0;
            for(int j = 0; j < 5; ++j) {
                if(a[0][j] == c[i][j]) sm++;
                if(a[0][j] < c[i][j])l++;
                else if(a[0][j] > c[i][j]) r++;
            }
            if(sm == 5) ind = i+1;
            if(l < r) {
                cout << i << '\n';
                for(auto x : a[0]) cout << x << ' ';
                cout << '\n';
                for(auto x : c[i]) cout <<x << ' ';
                cout << '\n';
                
                b = true;
            }
            if(b) break;
        }
        if(b) cout << "bad" << '\n';
        else cout << ind << '\n';
    }
}

