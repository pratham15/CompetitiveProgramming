#include<bits/stdc++.h>
using namespace std;
void solve() {
    int64_t a, b, c;
    cin >> c >> a >> b;
    // a, b+1, a*(b+1), a*(b+1) = ab +a, 
    // a*(a*(b+1) + b) = a^2(b+1) + ab
    // a^2b + a^2 + ab
    int l = 1;
    if(c % a == 0){cout << "Yes\n"; return;}
    while( l <= c){
        if((c-l) % b == 0) {cout << "Yes\n"; return;}
        l*=a;
        if(l==1) break;
    }
    cout << "no\n";
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
}

