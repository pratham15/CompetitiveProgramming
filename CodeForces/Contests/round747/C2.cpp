#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n;
        char c;
        string s;
        cin >> n >> c >> s;
        if(count(s.begin(), s.end(), c) == n){
            cout << "0\n";
            continue;
        }
        int ans = -1;
        for(int i = n/2; i < n; ++i) if(s[i] == c) ans = i + 1;
        if(ans == -1) cout << 2 << '\n'  <<  n-1 << ' ' << n << '\n';
        else cout << 1 << '\n' << ans << '\n';

    }
}

