#include<bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
    int n;
    cin >> n;
    vector<array<int, 3>> a(n);
    for(int i = 0; i < n; ++i){
        cin >> a[i][0] >> a[i][1];
        a[i][2] = i;
    }
    sort(a.begin(), a.end());
    vector<int> ans(n);
    int cnt = 0;
    multiset<pair<int, int>,greater<pair<int, int>>> rooms;
//    for(auto [x,y,z] : a) cout << x << ' ' << y << ' ' << z << '\n';
    for(int i = 0; i < n; ++i){
        if(rooms.empty()){
            cnt++;
            rooms.insert({-a[i][1], cnt});
            ans[a[i][2]] = cnt;
            //cout << i  << "qwe\n";
        }
        else {
            //cout << i << "qwe\n";
            auto it = rooms.begin();
            pair<int, int> x = *it;
            if(-x.first < a[i][0]){
                ans[a[i][2]] = x.second;
                rooms.erase(it);
                rooms.insert({-a[i][1], x.second});
            }
            else {
                cnt++;
                rooms.insert({-a[i][1], cnt});
                ans[a[i][2]] = cnt;
            }
        }
        //for(auto [x,y] : rooms){
         //   cout << x << ' ' << y << '\n';
        //}
        //cout << '\n';
    }
    cout << cnt<< '\n';
    for(auto x : ans) cout << x << ' ';
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();
}

