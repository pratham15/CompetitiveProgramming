#include<bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> a(n), b(n);
    for(int i = 0; i < n; ++i) cin >> a[i].first, a[i].second = i+1;
    a.insert(a.begin(), {0,0});
    a.push_back({2e5+10, 2e5+10});
    b = a;
    sort(a.begin(), a.end());
    int ans = 1;
    for(int i = 0; i < n; ++i)
        if(a[i].second <  a[i-1].second) ans++;

    auto check = [&] (int a) -> bool{
        if(b[a] < b[a+1] && b[a] > b[a-1]) return true;
        else return false;
    };
    for(int i = 0; i < m; ++i){
        int a, c; 
        cin >> a >> c;
        bool f = false, s = false;
        f = check(a);
        s = check(c);
        swap(b[a], b[c]);
        swap(b[a].second, b[c].second);
        //for(auto [x,y] : b) cout << x <<  ' ';
        //cout << '\n';
        if(f)
        {
            if(!check(c)) ans++;
        }
        else 
            if(check(c)) ans--;

        if(s){
            if(!check(a)) ans++;
        }
        else if(check(a)) ans--;
        cout << ans << '\n';
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

