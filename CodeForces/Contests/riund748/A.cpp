#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int a, b, c;
        cin >> a >> b >> c;
        if(a > max(b, c)) cout << 0 << ' ';
        else cout  << max(b, c) - a + 1 << ' ';

        cout << max(0, max(a, c) - b + 1) << ' ';
        cout << max(0, max(b, a) - c + 1) << '\n';
    }

}

