#include<bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
   int n, k;
   cin >> n>> k;
   vector<int> a(n);
   for(auto &x : a) cin >> x;
   sort(a.begin(), a.end());
   int64_t chef = 0, user = 0;
   int i = n-1;
   while(k--){
       chef += a[i--];
       user += a[i--];
   }
   user+=a[i--];
   cout << max(user, chef) << '\n';
}       
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    t = 1;
    cin >> t;
    while(t--) solve();
}

