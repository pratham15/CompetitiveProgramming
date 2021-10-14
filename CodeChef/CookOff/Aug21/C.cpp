#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        map<int, int> mp;
        bool neg = false, one = false;
        int cnt = 0;
        for(int i = 0, x; i < n; ++i){
            cin >> x;
            if(x == -1) neg = true;
            else if(x==1) one = true;
            else if(x != 0) cnt++;
            mp[x]++;
        }
        if(cnt > 1 || (neg == true && cnt >= 1)){ 
            cout << 0 << '\n';
            continue;
        }
        if(mp[-1] >1 && mp[1] == 0) {
            cout << "0\n"; 
            continue;
        }
        cout << 1 << '\n';
    }
}

