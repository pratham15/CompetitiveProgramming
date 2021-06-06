#include<bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for(auto &x : a) cin >> x;
    vector<int64_t> ans(n, 1e9);
    int64_t current = 0;
    for(int i = 0; i < n; ++i){
       if(a[i] == 1) {
           ans[i] = 0;
           current = 1;
       }
       else if(current != 0){
           ans[i] = current;
           current++;
       }
    }
    current = 0;
    for(int i = n-1; i>=0; --i){
        if(a[i] == 2){
            ans[i] = 0;
            current = 1;
        }
        else if(current != 0){
            ans[i] = min(current, ans[i]);
            current++;
        }
    }
    while(m--){
        int k;
        cin >> k;
        if(k == 1) cout << "0 ";
        else if(ans[k-1] < 1e9) cout << ans[k-1] << ' ';
        else cout << "-1 ";
    }
    cout << "\n";
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    t = 1;
    cin >> t;
    while(t--) solve();
}

