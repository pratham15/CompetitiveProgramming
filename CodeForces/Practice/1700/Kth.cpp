#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        for(int i = 1; i <= k-3; ++i) cout << 1 << ' ', n--;
        if(n%2) cout << n/2 << ' ' << n/2 << ' ' << 1 << '\n';
        else if(n%4 == 0) cout << n/4 << ' ' << n/4 << ' ' << n/2 << '\n';
        else cout << n/2 - 1 << ' ' << n/2 - 1 << ' ' << 2 << '\n';

    }

}

