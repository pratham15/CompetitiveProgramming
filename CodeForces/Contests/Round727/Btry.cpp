#include<bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
    int n, q;
    string s;
    cin >> n >> q >> s;
    vector<int> pref(n+1);
    for(int i = 1; i <= n; ++i){
        pref[i] = pref[i-1];
        pref[i] += s[i-1] - 'a' + 1;        
    }
    while(q--){
        int a, b;
        cin >> a >> b;
        cout << pref[b] - pref[a-1] << '\n';
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();
}

