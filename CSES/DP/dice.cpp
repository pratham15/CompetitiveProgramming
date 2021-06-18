#include<bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
const int MOD = 1e9+7;
void solve(){
    int n;
    cin >> n;
    vector<int> a(n+1);
    a[0] = 1;
    for(int i = 1; i <= n; ++i){
        a[i] = 0;
        for(int j = i-1; j >= i-6; --j){
            if(j>=0) a[i] = (a[i] + a[j]) % MOD;
        }
    }
    cout << a[n] << "\n";

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();
}

