#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int64_t n;
    cin >> n;
    vector<int> a(sqrt(n) + 1);
    int64_t x = sqrt(n);
    int64_t ans = 0;
    for(int i = 1; i <= x; ++i) {
        if(n % i != 0) continue;
        ans += i;
        ans += n/i;
    }
    cout << ans << '\n';
}


