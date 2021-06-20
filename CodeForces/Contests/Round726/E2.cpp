#include<bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int goodSoFar = 1;
    for(int i = 0; i < k; ++i){
        if(s[i%n] > s[i%goodSoFar]) break;
        else if(s[i%n] < s[i%goodSoFar]) goodSoFar = i+1;
    }
    for(int i = 0; i < k; ++i){
        cout << s[i%goodSoFar];
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

