#include<bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
    int n, k;
    string s;
    cin >> n >> k >> s;
    int l = 0, cur = 0;
 //    for(int i = 1; i < n; ++i){
 //        if(s[i] <= s[cur]) 
 //            cur = i;
 //        else break;
 //    }
 //   s = s.substr(0, cur+1);
    auto ansString = [&](string s) -> string{
        while(s.size() < k) s+= s;
        while(s.size() > k) s.pop_back();
        return s;
    };
    auto check = [&](string &a, string &b) -> bool {
        for(int i = 0; i < k; ++i){
            if(a[i] > b[i]) return false;
        }
        return true;
    };
    string prefix = "";
    prefix+=s[0];
    string ans = ansString(prefix);
    for(int i = 1;i < n; ++i){
        prefix += s[i];
        string neww = ansString(prefix);
        ans = min(ans, neww);
    }
    cout << ans  << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();
}

