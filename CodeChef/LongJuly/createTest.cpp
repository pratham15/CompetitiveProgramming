#include<bits/stdc++.h>
using namespace std;
int main(){
    mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());ios_base::sync_with_stdio(false);
    cin.tie(0);
    freopen("in.txt", "w", stdout);
    cout << 1e5<< '\n';
    for(int i = 1; i <= 1e5; ++i){
        int l = rng() % (int64_t)1e5;
        int r = rng() % (int64_t)1e5;
        l = max(l, 1);
        r = max(r, 1);
        if(l > r) swap(l, r);
        cout << l << ' ' << r << '\n';
    }
}

