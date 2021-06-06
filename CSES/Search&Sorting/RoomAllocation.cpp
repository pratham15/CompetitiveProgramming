#include<bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

bool comp(array<int, 3>&a,array<int, 3> &b){
    return a[0] < b[0];
}
void solve(){
    int n;
    cin >> n;
    vector<int>ans(n);
    multiset<pair<int,int>> departure;
    int current = 1;
    vector<array<int, 3>> input(n);
    for(int i = 0; i < n; ++i){
        cin >> input[i][0] >> input[i][1];
        input[i][2] = i;
    }
    sort(input.begin(), input.end(), comp);
    for(auto [x,y,z]:input) cout << x << ' ' << y << ' ' << z << '\n';
    for(int i = 0; i < n; ++i){
        int a, b;
        //ocin >> a >> b;
        a = input[i][0];
        b = input[i][1];
        int c = input[i][2];
        if(departure.empty()){
            ans[c] = current;
            departure.insert({-b, current});
            current++;
            continue;
        }
        auto it = departure.upper_bound({-a, 1e9});
        if(it == departure.end()){
            ans[c] = current;
            departure.insert({-b, current});
            current++;
            continue;
        }
        pair<int, int> x = *it;
        ans[c] = x.second;
        //cout << x.second << ' ' << x.first << '\n';
        departure.erase(it);
        departure.insert({-b, ans[i]});
    }
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

