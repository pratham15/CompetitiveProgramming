#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    vector<string> cmp;
    cmp.push_back("1");
    for(int i = 4; i <= 1000; ++i) {
        if(i%2 == 0) cmp.push_back(to_string(i));
        else {
            for(int j = 3; j * j <= i ;j += 2)
                if(i%j == 0) {
                    cmp.push_back(to_string(i));
                    break;
                }
        }
    }
    cin >> t;
    while(t--) {
        int n; string s;
        cin >> n >> s;
        for(auto &x : cmp) {
            int j = 0, i = 0;
            for(; i < n && j < x.length(); ) {
                if(s[i] == x[j]) j++;
                i++;
            }
            if(j==x.length()) {
                cout << x.length() << '\n';
                cout << x << '\n';
                break;
            }
        }
    }
}

