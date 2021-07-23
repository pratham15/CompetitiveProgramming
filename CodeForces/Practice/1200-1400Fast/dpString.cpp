#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while(T--) {
        int64_t x = 0, y = 0;
        string s; cin >> s;
        int64_t ans = 0;
        for(auto c : s) {
            if(c == '1') {
                x = y+1;
                y = 0;
            }
            else if(c == '0') {
                y = x+1;
                x =  0;
            }
            else {
                swap(x, y);
                x++, y++;
            }
            ans += max(x, y);
        }
        cout << ans << '\n';
    }    
}

