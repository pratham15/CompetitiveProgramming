#include<bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
int n, m, p, ind= 0;
string s;
char c;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin>> m  >> s >> n;
    vector<int> a(2*(s.length()+1), 1);
    for(int i = s.length(); i>=1; --i)
        a[i] = a[i*2] * (s[ind] != '1') + a[i*2+1] * (s[ind++] != '0');

    reverse(s.begin(), s.end());
    while(n--){
        cin >> p >> c;
        p = s.length() - p;
        s[p]=c;
        for(int i = p+1; i>=1; i = (i)/2){
            if(s[p] == '1')a[i] = a[i*2];
            else if(s[p] == '0') a[i] = a[i*2 + 1];
            else a[i] = a[i*2] + a[i*2+1];
            p = (p-1) / 2;;
        }
        cout << a[1] << '\n';
    }
}

