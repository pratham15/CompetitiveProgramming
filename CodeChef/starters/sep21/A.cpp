#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int64_t n, s; cin >> n >> s;
        int64_t x = n *  (n+1);
        x/=2;
        if(s>=x  ) {
            cout << "-1\n";
            continue;
        }
        if(x - n == s) cout << n << '\n';
        else if(x - n >= s) cout << "-1\n";
        else {
            cout << x -s << '\n';
        }
    }
}

