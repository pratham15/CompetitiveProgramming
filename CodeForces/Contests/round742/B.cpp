#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    int N = 1e6;
    vector<int> a(N);
    a[0] = 0;
    for(int i = 1; i < N; ++i) 
        a[i] = a[i-1] ^ i;
    while(t--) {
        int x, y;
        cin >> x >> y;
        if(a[x-1] == y) 
            cout << x  << '\n';
        else {
            if(x == (a[x-1] ^ y)) cout << x + 2 << "\n";
            else cout << x + 1 << '\n';
        }
    }
}

