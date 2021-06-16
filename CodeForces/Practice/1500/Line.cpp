#include<bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

vector<int> ans;
void solve(){
    int n;
    cin >> n;
    auto out = [] (int x){
        cout << x << ' ' << x+1 << '\n';
    };
    vector<int> a(n), b(n);
    for(auto &x :a) cin >> x;
    for(auto &x : b)cin >> x;
    for(int i = 0; i < n-1; ++i){
        if(b[i] == a[i]) continue;
        for(int j = i+1; j < n; ++j){
            if(b[j] == a[i]) {
                while(j > i){
                 //   cout << "j = " << j << '\n';
                    //out(j);
                    swap(b[j-1], b[j]);
                    ans.push_back(j);
               //     cout << b[j-1] << ' ' << b[j] << '\n';
                    j--;
                }
//                for(auto x : b) cout << x << ' ';
  //              cout << '\n';
                break;
            }
        }
    }
    cout << ans.size() << '\n';
    for(auto x: ans) out(x);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();
}

