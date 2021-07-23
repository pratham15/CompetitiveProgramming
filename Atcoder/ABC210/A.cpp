#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int64_t  N, A, X, Y;
    cin >> N >> A >> X >> Y;
    int64_t x = min(N, A);
    N -= x, A -= x;
    int64_t ans = x * X;
    ans += N * Y;
    cout << ans;

}

