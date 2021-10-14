#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n; cin >> n;
        string s; cin >> s;
        vector<string> a(n, string(n, 'X'));
        vector<int> st;
        for(int i = 0; i < n; ++i) {
            if(s[i] == '1') {
                a[i] = string(n, '=');
                for(int j = 0; j < n; ++j) a[j][i] = '=';
                a[i][i] = 'X';
            }
            else st.push_back(i);
        }
        
        if(st.size() == 1 || st.size() == 2) {
            cout << "NO\n";
            continue;
        }
        
        if(st.size() == 0) {
            cout << "YES\n";
            for(auto &x : a) cout << x << '\n';
            continue;
        }
        int k = st.size();
        for(int i = 1; i < k; ++i) {
            a[st[i]][st[i-1]] = '+';
            a[st[i-1]][st[i]] = '-';
        }

        a[st[0]][st[k-1]] = '+';
        a[st[k-1]][st[0]] = '-';

        cout << "YES\n";
        
        for(int i = 0; i < n; ++i) {
            for(int j = 0; j < n; ++j) {
                if(i==j) continue;
                if(a[i][j] == 'X') 
                    a[i][j] = '=';
            }
        }


        for(auto &x : a) cout << x << '\n';
    }
}

