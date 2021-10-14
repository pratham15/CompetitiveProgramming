#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while(T--) {
        int p; cin >> p;
        if(p%2 == 1){ p--;
            cout << p/2 << ' ' << p << '\n';
        }
        else {
            cout << 2 << ' ' << p/2 << '\n';
        }
    }
}

