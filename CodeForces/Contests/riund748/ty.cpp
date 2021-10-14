#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int64_t ans = 0;
    for(int64_t i = 0; i < (1LL << 30); ++i) 
        if(__builtin_popcountll(i) >= 20) ans++;
    cout << ans << '\n';
}

