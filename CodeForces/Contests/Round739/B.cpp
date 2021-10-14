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
        if(a<b) swap(a, b);
        int num = 2 * (a-b);
        if(a>num || b > num || c > num) {
            cout << -1 << '\n';
            continue;
        }
            
        int n = num/2 + c;
        while(n > num) n -= num;
        cout << n << '\n';
    }
}

