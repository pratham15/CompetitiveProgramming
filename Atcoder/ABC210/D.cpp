#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int64_t N, M, C;
    cin >> N >> M >> C;
    vector<array<int, 3>> a;
    for(int i = 0; i < N; ++i) 
        for(int j = 0; j < M; ++j) {
            int x; cin >> x;
            a.push_back({x, i,j});
        }
    sort(a.begin(), a.end());
    int64_t ans = 1e18;
    for(int i = 0; i < a.size() - 1; ++i) {
        for(int j = i+1; j < a.size(); ++j) {
            ans = min(ans, a[i][0] + a[j][0] + C * (abs(a[i][1] - a[j][1]) + abs(a[i][2] - a[j][2])));
        }
    }
    cout << ans;
}

