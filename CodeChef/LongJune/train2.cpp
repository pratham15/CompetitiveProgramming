#include<bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
    int n, m;
    cin >> n >> m;
    multiset<int, greater<int>> right;
    multiset<int>left;
    for(int i = 0; i < n; ++i){
        int k;
        cin >> k;
        if(k==1) right.insert(i+1);
        else if(k==2) left.insert(i+1);
    }
    while(m--){
        int k;
        cin >> k;
        int a1 = 0, a2 = 0;
        auto it = left.lower_bound(k);
        if(it == left.end()) a1 = 1e9;
        else a1 = abs(*it - k);
        auto it2 = right.lower_bound(k);
        if(it2 == right.end()) a2 = 1e9;
        else a2 = abs(*it2 - k);
        if(k==1) cout << "0 ";
        else if(a1 == a2 && a1 == 1e9) cout << "-1 ";
        else cout << min(a1, a2) << ' ' ;
    }
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    t = 1;
    cin >> t;
    while(t--) solve();
}
