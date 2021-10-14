#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        string n; int k;
        cin >> n >> k;
        if(k==1) {
            char c = *max_element(n.begin(), n.end());
            for(int i = 0; i < n.length(); ++i) {
                cout << c;
            }
            cout << '\n';
        }
        else if(k >= n.length()) cout << n << '\n';
        else {
            char a, b;
            a = b = n[0];
            bool l = false, m = false;
            int ln = n.length();
            for(int i = 1; i < n.length(); ++i) {
                if(n[i] != n[i-1]) {ln = i; break;}
            }
            if(ln == n.length()) {
                cout << n << '\n';
                continue;
            }
            for(int i = 0; i < ln; ++i) cout << n[0];
            if(n[ln] > n[0]) {
                cout << n[ln];
                for(int i = ln+1; i < n.length(); ++i) cout << n[0];
                cout << '\n';
            }
            else {
                for(int i = ln; i < n.length(); ++i) cout << n[ln];
                cout << '\n';
            }
        }
    }
}

