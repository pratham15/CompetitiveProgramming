#include<bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
    int n;
    cin >> n;
    vector<int> a(n+1, -1);
    for(int i= 0; i < n; ++i){
        int k;
        cin >> k;
        if(a[k] == -1) a[k] = i;
        else if (i - a[k] >= 2) {cout << "YES\n"; return;}
    }
    cout << "NO\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    t = 1;
    cin >> t;
    while(t--) solve();
}

