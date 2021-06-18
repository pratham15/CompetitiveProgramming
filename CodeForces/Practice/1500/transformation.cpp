include<bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
    int n;
    cin >> n;
    map<int,int> mp;
    for(int i= 0; i < n; ++i){
        int x;
        cin >> x;
        mp[x]++;
    }
    multiset<pair<int, int>> ans;
    for(auto [x,y] : mp)
        ans.insert({y,x});
    while(ans.size() > 1) {
        pair<int, int> x = *ans.rbegin();
        ans.erase(ans.find(x));
        pair<int, int> y =  *ans.rbegin();
        ans.erase(ans.find(y));
        x.first--, y.first--;
        if(x.first) ans.insert(x);
        if(y.first) ans.insert(y);
        n-=2;
    }
    cout << n << '\n';
}




int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    t = 1;
    cin >> t;
    while(t--) solve();
}

