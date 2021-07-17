#include<bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
const int N = 1010;
void solve(){
    int n, m;
    cin >> n >> m;
    vector<multiset<int>> a(N), b(N);
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < m; ++j){
            int x;
            cin >> x; 
            a[i+j].insert(x);
        }
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < m; ++j){
            int x;
            cin >> x; 
            b[i+j].insert(x);
        }
    for(int i = 0; i < 1010; ++i){

        if(a[i] != b[i]) { cout << "NO\n"; return; }
    }
    cout << "YES\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();
}

