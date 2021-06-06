#include<bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<int> a(n);
    for(int i = 0; i < n; ++i){
        if(s[i] == '0') a[i] = 0;
        else a[i] = 1;
    }
    int64_t dist = 0;
    for(int i = 1; i < n; ++i){
        if(a[i] == a[i-1]) dist += 2;
        else dist += 1;
    }
    while(k--) {
        int l;
        cin >> l;
        if(l==1){
            if(a[1] == a[0]) dist -= 1;
            else dist += 1;
        }
        else if( l==n) {
            if(a[n-1] == a[n-2]) dist -= 1;
            else dist += 1;
        }
        else {
            if(a[l-2] == a[l-1]) dist -= 1;
            else dist += 1;
            if(a[l-1] == a[l]) dist -= 1;
            else dist += 1; 
        }
        if(a[l-1] == 0) a[l-1] = 1;
        else a[l-1] = 0;
        cout << dist << '\n';
    }
    //cout << dist << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    t = 1;
    cin >> t;
    while(t--) solve();
}

