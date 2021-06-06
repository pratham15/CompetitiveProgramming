#include<bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
    int a, b, c, d, k;
    cin >> a >> b >> c >> d >>k;
    int total = abs(c-a);
    total += abs(d-b);
    //cout << total << '\n';
    if(total == k) cout << "Yes\n";
    else if(total > k)cout << "No\n";
    else if((total-k)%2==0) cout << "Yes\n";
    else cout << "No\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    t = 1;
    cin >> t;
    while(t--) solve();
}

