#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int64_t a, b;
        cin >> a >> b;
        cout << b/3 - a/3 + (a % 3 == 0) << '\n';
    }
}


