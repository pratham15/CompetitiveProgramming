#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while(T--) {
        int x, y; cin >> x >> y;
        if(__gcd(x, y) > 1) cout << 0 << '\n';
        else if(__gcd(x+1,y) > 1 || __gcd(x, y+1) > 1) cout << 1 << '\n';
        else cout << 2 << '\n';
    }
}

