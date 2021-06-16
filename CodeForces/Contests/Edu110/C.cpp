#include<bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
    string s;
    cin >> s;
    int n = s.length();
    int x = 0, y = 0;
    int64_t ans = 0;
    for(int i = 0; i < n; ++i){
        if(s[i] == '1'){
            y = x+1;
            x = 0;
        }
        else if(s[i] == '0'){
            x = y+1;
            y = 0;
        }
        else {
            int temp = x;
            x=y+1;
            y = temp+1; 
        }
        ans += max(x,y);
        //cout << x << ' ' << y << "\n";
    }
    cout << ans << '\n';

} 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    t = 1;
    cin >> t;
    while(t--) solve();
}

