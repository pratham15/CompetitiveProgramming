#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n; string s;
        cin >> n >> s;
        string ans;
        for(auto x : s) {
            if(x == 'L' || x == 'R') ans += x;
            else if(x == 'U') ans += 'D';
            else ans += 'U';
        }
        cout << ans << "\n";
    }
}

