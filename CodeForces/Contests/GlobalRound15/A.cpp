#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while(T--) {
        int n;
        string s;
        cin >> n >> s;
        cout << [&]() {
            string t = s;
            sort(t.begin(), t.end());
            int ans = 0;
            for(int i = 0; i < n; ++i) if(t[i] != s[i]) ans++;
            return ans;
        }() << '\n';
    }
}

