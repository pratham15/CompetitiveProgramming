#include<bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
    vector<int64_t> a;
    for(int64_t i = 1; i <= 10000; ++i) a.push_back(i*i*i);
    int64_t x;
    cin >> x;
    for(auto k: a){
        if(x - k < 0) continue;
        int indx = lower_bound(a.begin(), a.end(), x - k) - a.begin();
        if(a[indx] == x-k) {cout << "Yes\n"; return;}
    }
    cout << "No\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    t = 1;
    cin >> t;
    while(t--) solve();
}

