#include<bits/stdc++.h>
using namespace std;
void solve() {
    int64_t x, y;
    cin >> x >> y;
    if(x <  y) swap(x,y);
    int64_t ans;
    if(x==y) ans = 0;
    else ans = min(x-y-(x%(x-y)), x%(x-y));
    cout <<x-y << ' ' <<  ans << '\n';
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin  >> t;
    while(t--){
        solve();
    }

}

