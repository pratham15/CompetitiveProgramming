#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    string s, k = "Done";
    while(T--) {
        bool win = false;
        for(int i = 8; i >= 2; --i) {
            if(i&1) {
                for(int j = 1; j <= 8; ++j) {
                    cout << i << ' ' << j << '\n';
                    cin >> s;
                    if(s==k) {
                        win = true;
                        break;
                    }
                }
            }
            else {
                for(int j = 8; j>= 1; --j) {
                    cout << i << ' ' << j << '\n';
                    cin >> s;
                    if(s==k) {
                        win = true;
                        break;
                    }
                }
            }
            if(win) break;
        }
    }
}


