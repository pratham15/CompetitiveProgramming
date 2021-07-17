#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int d, x, y, z;
        cin >> d >> x >> y >> z;
        cout << max(x * 7, y * d + (7 - d) * z) << '\n';
    }
}

