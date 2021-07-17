#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        vector<string> s(n);
        vector<int> freq(m, 0);
        for(int i = 0; i < n; ++i){
            cin >> s[i];
            for(int j = 0; j < m; ++j){
                freq[j] += s[i][j];
            }
        }
        for(int i = 0; i < n-1; ++i) {
            string k; cin >> k;
            for(int j = 0; j < m; ++j){
                freq[j] -= k[j];
            }
        }
        for(auto x : freq) cout << char(x) ;
        cout << '\n';
        cout.flush();
    }
}

