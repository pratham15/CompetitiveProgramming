#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n, a, b;
        cin >> n >> a >> b;
        string s;
        cin >> s;
        int nsz = 0;
        for(int i = 0; i < n; ) {
            nsz++;
            int j = i;
            while(i < n && s[i] == s[j]) ++i;
        }
        nsz /= 2;
        nsz++;
        if(b<0) cout << b * nsz + a * n << '\n';
        else cout << (a+b) * n << '\n';
    }
}
