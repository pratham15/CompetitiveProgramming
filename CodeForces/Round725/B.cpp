#include<bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
    int64_t n;
    cin >> n;
    vector<int64_t> a(n);
    int64_t candies = 0;
    for(auto &x : a){
        cin >> x;
        candies += x;
    }
    if(candies == 0) {cout << "0\n"; return;}
    if(candies % n != 0) {cout << "-1\n"; return;}
    sort(a.begin(), a.end());
    int64_t perFriend = candies / n;
    int64_t candiesNeeded = 0;
    for(int i = 0; i < n; ++i){
        if(a[i] < perFriend) candiesNeeded += perFriend - a[i];
        else break;
    }
    int ans = 0;
    for(int i = n-1; i>=0; --i){
        if(candiesNeeded <= 0) break;
        ans++;
        candiesNeeded -= (a[i] - perFriend);
    }
    cout << ans << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    t = 1;
    cin >> t;
    while(t--) solve();
}

