#include<bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
   int n;
   cin >> n;
   int x; int64_t sum = 0;
   for(int i = 0; i < n; ++i){
        cin >> x;
        sum+= x;
   }
   if( sum < n ) cout << "1\n";
   else cout << sum - n << '\n';

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    t = 1;
    cin >> t;
    while(t--) solve();
}

