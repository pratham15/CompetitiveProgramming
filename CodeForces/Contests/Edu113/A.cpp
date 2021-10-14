#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n; cin >> n;
        string s;
        cin >> s;
        int a = 0, b= 0;
        for(int i = 0; i < n; ++i) if(s[i] == 'a') a++; else b++;
        if(a==0 || b==0) {
            cout << "-1 -1\n";
            continue;
        }
        for(int i = 0; i < n-1; ++i) {
            if(s[i] == 'a' && s[i+1] == 'b') {
                cout << i+1 << ' ' << i+2 << '\n';
                break;
            }
            if(s[i] == 'b' && s[i+1] == 'a') {
                cout << i+1 << ' ' << i+2 << '\n';
                break;
            }
        }
    }
}

