#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        string s, t; cin >> s >> t;
        string rev = s; 
        int n = s.size(), m = t.size();
        reverse(rev.begin(), rev.end());
        bool ok = false;
        if(s.find(t) != string::npos || rev.find(t) != string::npos) {cout << "YES\n"; continue; }
        for(int i = 0; i < n; ++i) {
            if(ok) break;
            for(int j = i; j < n; ++j) {
                if(ok) break;
                string check = "";
                for(int k = i; k <= j && check.size() < t.size(); ++k)
                    check += s[k];

                if(check.size() == t.size() && check == t) {
                    ok = true;
                    break;
                }
                for(int k = j-1; k >= 0 && check.size() < t.size(); k--) 
                    check += s[k];
                if(check.size() == t.size() && check == t) {
                    ok = true;
                    break;
                }
            }
        }
        cout << (ok ? "Yes\n":"No\n");
    }
}

