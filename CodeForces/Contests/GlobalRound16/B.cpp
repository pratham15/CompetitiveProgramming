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
        int cnt = 0;
        bool found = false;
        for(int i = 0; i < n; ++i) {
            if(s[i] == '0' && found == false) found = true;
            if(s[i] != '0' && found == true) cnt++, found = false;
        }
        if(found == true) cnt++;
        cout << (cnt < 2 ? cnt : 2) << '\n';
    }
}

