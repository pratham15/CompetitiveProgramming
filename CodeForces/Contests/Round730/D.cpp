#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        for(int i = 0; i < n; ++i) {
            if(i==0) cout << "0\n";
            else cout << (i^(i-1)) << '\n';
            int v; cin >>v;
            if(v==1) break;
        } 
    }
}

