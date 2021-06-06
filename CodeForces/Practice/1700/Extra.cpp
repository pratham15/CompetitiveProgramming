#include<bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    if(n == 2 || n == 3){
        cout << "2";
        return;
    }
    for(auto &x : a) cin >> x;
    sort(a.begin(), a.end());
    multiset<int>  mp;
    for(int i = 1; i < n; ++i){
        mp.insert(a[i] - a[i-1]);
    }
//    for(auto it = mp.begin(); it!=mp.end(); ++it){
//        cout << it->first << ' ' << it->second << '\n';
//    }
    for(auto x : mp) cout << x << ' ';
    if(mp.size() > 3){ cout << "-1\n"; return;}
    if(mp.size() == 1){cout << "1\n"; return;}
    if(mp.size() == 2){
      int x = 0, y = 0;
      auto it = mp.begin();
      auto it2 = it;
      it2++;
      for(int i = 1; i < n; ++i){
        
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

