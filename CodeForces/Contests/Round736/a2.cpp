#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n; cin >> n;
    if(n%2 == n%4) {
        cout << 2 << ' ' << 4 << '\n';
    }
    else cout << 2 << ' ' <<  n-1 << '\n';
}

