#include<bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
    string a, b;
    cin >> a >> b;
    if(a.size() > b.size()){
        cout << "NO\n";
        return;
    }
    vector<pair<char, int>> ori,co;

    
    auto init = [] (string &s, vector<pair<char, int>> &a){
        char cur = s[0];
        int le = 0;
        for(int i = 0; i < s.size(); ++i){
            if(cur != s[i]){
               a.push_back({cur, le});
               le = 1;
               cur =s[i];
           }
        else
           le++;
        }
        a.push_back({cur, le});
    };
    init(a, ori);
    init(b, co);
//    for(auto x : ori){
//        cout << x.first << ' ' << x.second << '\n';
//    }
//    for(auto x : co){
//        cout << x.first << ' ' << x.second << '\n';
//    }
    if(ori.size() != co.size()){
        cout << "NO\n";
        return;
    }
    for(int i = 0; i < co.size(); ++i){
        if(ori[i].first != co[i].first || ori[i].second>  co[i].second){
            //cout << ori[i].first << ' ' << co[i].first << ' ' << ori[i].second << ' ' << co[i].second << '\n';
            cout << "NO\n";
            return;
            
        }
    }
    cout << "YES\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    t = 1;
    cin >> t;
    while(t--) solve();
}

