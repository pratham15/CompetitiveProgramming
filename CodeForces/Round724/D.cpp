#include<bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
    int n;
    cin >> n;
    vector<int> a(n); for(auto &x : a) cin >> x;
    if(n==1) cout << "Yes\n";
    int a = a[0];
    int index = 1;
    int l = 0, r = 0;
    for(int i = 1;i < n ; ++i){
       if(a[i] < a){

       }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();
}

