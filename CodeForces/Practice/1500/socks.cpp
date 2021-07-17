#include<bits/stdc++.h>
using namespace std;

const int N = 2e5 + 10;
vector<int> socks(N, 0);
void solve(){
    int n, l, r;
    cin >> n >> l >> r;
    int tl = l, tr = r;
    for(int i = 0; i <=n; ++i) socks[i] = 0;
    for(int i = 0; i < l; ++i) {
        int x;
        cin >> x;
        socks[x]++;
    }
    for(int i = 0; i < r; ++i){
        int x;
        cin >> x;
        if(socks[x] > 0)
            tl--, tr--;
        socks[x]--;
    }
    int ans = 0;
    for(int i= 0; i <= n; ++i){
        while( tl > tr && socks[i] > 1) socks[i] -= 2, ans++, tl-= 2;
        while( tr > tl && socks[i] < -1) socks[i] += 2, ans++, tr-= 2;
    }
    cout << ans + max(tl,tr) << '\n';

}
    int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    t = 1;
    cin >> t;
    while(t--) solve();
}

