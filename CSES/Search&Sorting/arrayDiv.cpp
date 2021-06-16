#include<bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
    int n, d;
    cin >> n >> d;
    vector<int> a(n);
    for(auto &x : a) cin >> x;
    int64_t l = *min_element(a.begin(), a.end());
    int64_t h = accumulate(a.begin(), a.end(), 0LL);
    int64_t ans = 0;
    while(l <= h){
        int64_t mid = (h+l) / 2;
        bool k = true;
        int64_t temp = 0, cnt = 1;
        for(int i = 0; i < n; ++i){
            if(a[i] > mid) {k = false;break;}
            if(a[i] + temp <= mid) temp += a[i];
            else {
                temp = a[i];
                cnt++;
            }
        }
        if(cnt > d){ k = false; } 
        if(k) ans = mid, h = mid-1;
        else l = mid+1;
    }
    cout << ans << '\n';

}

int main(){
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();
}

