#include<bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

bool isPalin(string s){
    for(int i = 0; i < s.size()/2; ++i){
        if(s[i] != s[s.size() - i- 1]) return false;
    }
    return true;
}
int ans = 1;
void solve(){
    for(int i = 100; i < 1000; ++i){
        for(int j = 100; j < 1000; ++j){
            string s = to_string(i*j);
            if(isPalin(s)) ans =max( i*j, ans);
        }
    }
    cout << ans << '\n';
    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    //freopen("w", "output.txt", stdout);
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();
}

