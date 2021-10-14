#include<bits/stdc++.h>
using namespace std;

int main(){
    while(1) {
        map<int, int> mp;
        while(1) {
            int x;
            cin >> x;
            if(x==-1) break;
            else mp[x]++;
        }
        int t = 0;
        for(auto [x, y]: mp) cout << x << ' ' << y << '\n', t += y;
        cout << '\n';
        cout << t << '\n';
    }
}

