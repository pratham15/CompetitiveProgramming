#include<bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
    int n, s;
    cin >> n >> s;
    vector<pair<int, int>> a(n);
    for(int i = 0; i < n; ++i){
        cin >> a[i].first;
        a[i].second = i+1;
    }
    sort(a.begin(), a.end());
    if(n < 4){ cout << "IMPOSSIBLE"; return;}
    for(int i = 0; i < n; ++i){
        for(int j = i+1; j < n; ++j){
            int l = j+1, h  = n-1;
            int k = a[i].first + a[j].first;
            while(l<h){
                if(k + a[l].first + a[h].first < s) l++;
                else if( k + a[l].first + a[h].first> s)h--; 
                else {
                    cout << a[l].second << ' ' << a[h].second << ' ' << a[j].second << ' ' << a[i].second;
                    return;
                }
            }
        }
    }
    cout << "IMPOSSIBLE";
}



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();
}

