#include<bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
   int n; cin >> n; 
   vector<int> a(n); for(auto &x : a) cin >> x;
   bool mini = false, maxi = false;
   int ans = 1e9;
   for(int i = 0; i < n; ++i){
        if(a[i] == 1) mini = true;
        if(a[i] == n) maxi = true;
        if(mini & maxi){ans = i+1; break;}
   }
   mini = false, maxi = false;
   for(int i = n-1; i>=0; --i){
     if(a[i] == 1) mini = true;
     if(a[i] == n) maxi = true;
     if(mini & maxi) {ans = min(ans, n-i-1); break;}
   }
   mini = false, maxi = false;
   int l=  0, r = 0;
   for(int i = 0; i < n; ++i){
       l++;
    if(a[i] == 1 || a[i] == n) break;
   }
   for(int i = n-1; i>=0; --i){
       r++;
       if(a[i] == 1 || a[i] == n) break;
   }
   ans = min(ans, l+r);
   cout << ans << "\n";

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    t = 1;
    cin >> t;
    while(t--) solve();
}

