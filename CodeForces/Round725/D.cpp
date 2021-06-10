#include<bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

int p(int x){
    int ans = 0;
    for(int i = 2; i * i <= x; ++i){
        while(x%i == 0){
            x/=i;
            ++ans;
        }
    }
    if(x>=2) ans++;
    return ans;
}
void solve(){
   int a, b, k;
   cin >> a >> b >> k;
   if(k==1){
       if(a==b) cout << "No\n";
       else if(a%b == 0 || b%a == 0) cout << "Yes\n";
       else cout << "No\n";
       return;
   }
   int x = p(a), y = p(b);
       if(x + y >= k) cout << "Yes\n";
       else cout << "No\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    t = 1;
    cin >> t;
    while(t--) solve();
}

