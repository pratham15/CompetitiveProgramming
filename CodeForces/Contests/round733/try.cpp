#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s; cin >> s;
    cout << (s.find("c") == string::npos) << '\n';
    reverse(s.begin(), s.end());
    cout << (s.find("c")==string::npos) << '\n';
}

