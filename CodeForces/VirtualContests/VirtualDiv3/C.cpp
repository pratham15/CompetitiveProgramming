#include<bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
    string s;
    cin >> s;
    vector<int> a;
    a.push_back(0);
    for(int i = 0; i < s.length(); ++i){
        if(s[i] == 'R') a.push_back(i+1);
    }
    int ans = 0;
    a.push_back(s.length() + 1);
    for(int i = 0; i < a.size() - 1; ++i){
        ans = max(ans, a[i+1] - a[i]);
    }
    cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    t = 1;
    cin >> t;
    while(t--) solve();
}

