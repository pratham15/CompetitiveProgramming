#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<int> a(n); for(auto &x : a) cin >> x;
    sort(a.begin(), a.end());
    int h = 1;
    int64_t mn = 1e18;
    for(int i = 1; i < n; ++i){
        if(a[i] - a[i-1] < mn) {
            mn = a[i] - a[i-1];
            h = i;
        }
    }
    if(n==2) {cout << a[0] << ' ' << a[1] << '\n'; return; }
    for(int i = h; i < n; ++i) 
        cout << a[i] << ' ';
    for(int i = 0; i < h; ++i)
        cout << a[i] << ' ';
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



