#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while(T--) {
        string s, t; cin >> s >> t;
        string rev = t;
        reverse(rev.begin(), rev.end());
        if(s==t || s == rev || s.find(t) != string::npos || rev.find(t) != string::npos){ cout << "YES\n"; continue;}
        int n = s.size();
        bool g = false;
        for(int i = 0; i < n; ++i) {
            int ind = 0; 
            bool goodSoFar = true;
            for(int j = i; j < n; ++j) {
                if(s[j] !=  t[ind]) {break;}
                ind++;
                if(ind == t.size()) {break;}
            }
            if(ind == t.size()) g = true;
            int x = 0;
            for(int j = i + ind - 2; j>= 0; --j) {
                if(t[ind] != s[j]){ goodSoFar = false; break;}
                ind++;
                if(ind == t.size()) break;
            }
            if(goodSoFar) g = true;
            if(ind != t.size()) g = false;
            if(g) break;
        }
        if(g) cout << "Yes\n";
        else cout << "No\n";
    }
}

