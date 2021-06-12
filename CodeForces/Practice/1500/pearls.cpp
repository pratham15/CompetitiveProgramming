#include<bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
map<int, pair<int, int>> mp;
int64_t current = 0, prv = 1;
void solve(){
    int n;
    cin >> n;
    vector<int> ans;
    for(int i = 0; i < n; ++i){
        int k; cin >> k;
        pair<int, int> x = mp[k];
        if(x.first % 2 == 0) mp[k] = {x.first+1 , current};
        else {
            if(x.second < current)
                mp[k] = {x.first, current};
            else {
                current++;
                mp[k] = {x.first + 1, current};
                ans.push_back(prv), ans.push_back(i+1);
                prv = i+2;
            }
        }
    }
    if(ans.empty()) {
        cout << "-1";
        return;
    }
    cout << current << '\n';
    ans[ans.size()-1] = n;
    for(int i = 0; i < ans.size(); i+=2) 
        cout << ans[i] << ' ' << ans[i+1] << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();
}

