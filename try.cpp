#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    map<string, int> mp;
    for(int i = 0; i < 5; ++i){
        string s; int l;
        cin >> s >> l;
        mp[s] += l;
    }
    for(auto x : mp) cout << x.first << ' ' << x.second << '\n';
}

