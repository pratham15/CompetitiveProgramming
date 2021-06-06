#include<bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
    string s;
    cin >> s;
    vector<int> a(s.length()* 2 , 1);
    int j = 8;
    int index = 0;
    int m;
    cin >> m;
    while(m--){
        int p; char c;
        cin >> p >> c;
        s[p-1] = c;
        for(int i = 0; i < s.length(); i+=2){
            if(s[index] == '0')a[j]=a[i];
            else if(s[index] == '1') a[j] = a[i+1];
            else a[j] =a[i] + a[i+1];
            j++, index++;
        }
        cout << a.back() << ' ';
        cout << '\n' << s << '\n';
        for(auto x :a) cout << x << ' ' ;
        cout << "\n";
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();
}

