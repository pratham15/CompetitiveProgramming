#include<bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    map<char, int> mp;
    string vow = "AEIOU";
    int v = 0, c = 0;
    for(auto &x : s) {
        mp[x]++;
        if(vow.find(x) != string::npos) v++;
        else c++;
    }
    int mv = 0, mc = 0;
    for(auto [x, y]: mp) {
        if(vow.find(x) != string::npos) mv = max(mv, y);
        else mc = max(mc, y);
    }
    /*
    cout << mc << ' ' << mv << '\n';
    cout << c << ' ' << v << '\n';
    cout << mv + (c-mc) * 2 << '\n';
    cout << mc + (v-mv) * 2 << '\n';
    */
    cout << min(v + (c-mc) * 2, c + (v - mv) *2) << '\n';
}

int main(){
    freopen("out.txt", "w", stdout);
    int t;
    cin >> t;
    for(int i = 0; i < t; ++i) {
        cout << "Case #" << i+1 << ": ";
        solve();
    }

}

