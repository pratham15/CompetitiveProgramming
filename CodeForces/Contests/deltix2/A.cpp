#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int c, d;
        cin >> c >> d;
        if(d==c){  
            if(d==0) cout << "0\n";
            else 
                cout << "1\n";
        }
        else if((d-c) % 2 == 0) cout << "2\n";
        else cout << "-1\n";

    }
}

