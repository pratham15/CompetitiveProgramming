#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while(T--){

        string s, t;
        cin >> s >> t;
        const int n = s.size(), m = t.size();
        int i = n-1;
        bool ok = true;
        for(int j = m-1; j >= 0; --j) {
            while(i >= 0 && s[i] != t[j]) i-=2;
            if(i<0) ok = false;
            i--;
        }
        cout << (ok ? "Yes\n" : "No\n");
    }
}

