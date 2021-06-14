#include<bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    int64_t ans = 0;
    for(auto &x : a) cin >> x;
    a.insert(a.begin(), 0);
    a.push_back(0);
    if(n == 1){ cout << a[1] << '\n'; return; }
    for(int i = 1; i < n; ++i){
        if(a[i] > a[i-1]&& a[i] > a[i+1] ){
            int k = max(a[i-1], a[i+1]);
            ans += a[i] - k;
            a[i] = k; 
        }
    }
    int64_t total = a[0];
    for(int i = 1; i < n; ++i){
       total += abs(a[i] - a[i-1]);
    }
    cout << total + ans + a[n-1]<< '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    t = 1;
    cin >> t;
    while(t--) solve();
}

