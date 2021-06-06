#include<bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
    int n;
    string s;
    map<pair<int, int>, int> mp;
    cin >> n >> s;
    int D = 0, K = 0;
    for(int i = 0; i < n; ++i){
        if(s[i] == 'D') D++;
        else K++;
        if(D == 0) cout << K << ' ';
        else if(K == 0) cout << D << ' '; 
        else {
            int x = D, y = K;
            int k = __gcd(x,y);
            x/=k; y/=k;
            mp[{x,y}]++;
            cout << mp[{x, y}] << ' ';
        }
    } 
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    t = 1;
    cin >> t;
    while(t--) solve();
}

