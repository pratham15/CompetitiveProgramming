#include<bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

/* Given 
 * 1. Number of machines working simultaneously, number of products needed.
 * 2. Each machine takes Xi minutes to make a single product.
 * 3. Let's pick a time t, in that time t the total products that will be made is summation i [1, n] time / machine[i]
 * 4. If we can do better, reduce the time, else increase it. 
 */

void solve(){
    int n, t;
    cin >> n >> t;
    vector<int> a(n); for( auto &x : a) cin >> x;
    int64_t h = 1e18, l = 0, ans = 0;
    while(h >= l) {
        int64_t mid = (h + l) / 2;
        int64_t sum = 0;
        for(auto x : a) {
            sum+= mid / x;
            if(sum>=t) break;
        }
        if( sum >= t) ans = mid, h = mid-1;
        else l = mid+1;
    }
    cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();
}

