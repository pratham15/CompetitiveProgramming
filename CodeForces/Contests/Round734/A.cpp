#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while(T--) {
        int n; cin >> n;
        if(n==1) cout << "1 0\n";
        else if(n==2) cout << "0 1\n";
        else {
            if(n%3==0) cout << n/3 << ' ' << n/3 << '\n';
            else if(n%3 == 2) cout << n/3 << ' ' << n/3 + 1 << '\n';
            else if(n%3 == 1) cout << n/3+1 << ' '<< n/3 << '\n';
        }
    }
}

