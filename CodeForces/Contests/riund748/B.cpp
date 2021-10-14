#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
       string s;
       cin >> s;
       int ans = 100;
       int n = s.size();
       for(int i = n-1; i >=0; --i) {
           int curAns = 1e9;
           char m1, m2;
           if(s[i] == '5') m1 = '2', m2 = '7';
           else if(s[i] == '0') m1 = '0', m2 = '5';
           else continue;
           for(int j = i-1; j >= 0; --j) {
               if(s[j] == m1 || s[j] == m2) {
                   curAns = n - (i + 1);
                   curAns += i - j - 1;
                   break;
               }
           }
           ans = min(ans, curAns);
       }
       cout << ans << '\n';
    }
}

