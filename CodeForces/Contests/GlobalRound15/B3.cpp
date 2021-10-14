#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n; cin >> n;
        deque<array<int, 6>> a(1);
        for(int i = 0; i < 5; ++i) cin >> a[0][i];
        a[0][5] = 1;
        for(int i = 1; i < n; ++i) {
            int l = 0, r = 0;
            array<int, 6> b;
            for(int j = 0; j < 5; ++j) {
                cin >> b[j];
                if(a.back()[j] < b[j]) r++;
                else l++;
            }
            b[5] = i+1;
            if(l > r) a.push_back(b);
            else a.push_front(b);
        }
        bool b = false;
        for(int i = n-2; i>= 0; --i) {
            int l = 0, r = 0;
            for(int j =0; j < 5; ++j) {
                if(a[n-1][j] < a[i][j]) l++;
                else r++;
            }
            if(l < r) {b = true; break;}
        }
        if(b) cout << -1 << '\n';
        else cout << a[n-1][5] << '\n';
    }
}

