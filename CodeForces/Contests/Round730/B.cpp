#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    int64_t sum = 0;
    for(int i = 0; i < n; ++i) {int x;
        cin >> x;
        sum += x;}
    int64_t l = sum % n;
    cout << l * (n-l) << '\n';
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
    
}

