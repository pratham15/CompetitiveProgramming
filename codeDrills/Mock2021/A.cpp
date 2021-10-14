#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while(T--) {
        int64_t w, l, m, x, y;
        cin >> w >> l >> m >> x >> y;
        if(m - y >= w) {
            cout << "JUMP\n";
        }
        else cout << "FALL\n";
    }
}

