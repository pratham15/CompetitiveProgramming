#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int64_t n; cin >> n;
        if(n%6 == 0 || n%8 == 0 || n%10 == 0) {
            if(n%6==0) cout << (n/6) * 15 << '\n';
            else if(n%8==0) cout << (n/8) * 20 << '\n';
            else cout << (n/10) * 25 << '\n';
        }
        else if(n >= 14 && n%2 == 0){
            cout << n*2 + n/2 << '\n';
        }
        else if(n <6) cout << 15 << "\n";
        else if( n < 8) cout << 20 << '\n';
        else if(n < 10) cout << 25 << '\n';
        else {
            n++;
            cout << n*2 + n/2 << '\n';
        }
    }
}


