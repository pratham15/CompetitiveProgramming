#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        string s, a, b;
        cin >> s;
        for(int i = 0; i < s.size(); ++i) {
            if(i%2 == 0) a.push_back(s[i]);
            else b.push_back(s[i]);
        }
        if(b.length() == 0) {
            cout << stoi(a) - 1 << '\n';
        }
        else cout << (stoi(a) + 1) * (stoi(b) + 1) - 2 << '\n';
    }
}


