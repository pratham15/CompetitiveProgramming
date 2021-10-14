#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        int n = s.size();
        bool f = false;
        for(int i = 1; i < n; ++i) {
            if(s[i-1] == 'M' && s[i] == 'U')  f = true;
            if(i < n-1) {
                if(s[i-1] == 'M' && s[i+1] == 'U') f=true;
            }
        }
        cout << (f ? "Yes\n":"No\n");
    }
}

