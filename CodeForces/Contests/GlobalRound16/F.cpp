#include<bits/stdc++.h>
using namespace std;
#define int int64_t
const int N = 2e5 + 10;

int DP[N][2];
int pts[N];
pair<int, int> segs[N];
vector<pair<int, int>> FinalSeg[N];


signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;

        for(int i = 0; i < n; ++i) cin >> pts[i];
        for(int i = 0; i < m; ++i) cin >> segs[i].first >> segs[i].second;
        sort(pts, pts+n);
        sort(segs, segs+m);
        pts[n] = 1e15;

        cout << "\n\n";
        int cur = 0;
        for(int i = 0; i < m; ++i) {
            while(segs[i].first > pts[cur]) cur++;
            if(segs[i].second >= pts[cur]) continue;
            while(FinalSeg[cur].size() >= 1 && FinalSeg[cur].back().second >= segs[i].second)
                FinalSeg[cur].pop_back();
            FinalSeg[cur].push_back(segs[i]);
        }

        for(int i = 0; i <= n; ++i) {
            for(auto x : FinalSeg[i]) cout << x.first << ' ' << x.second << '\n';
            cout << '\n';
        }

        if(FinalSeg[0].size() == 0) 
            DP[0][0] = DP[0][1] = 0;
        else {
            //dp[0][0] left point went but never came back
            DP[0][0] = pts[0] - FinalSeg[0][0].second;
            // came back
            DP[0][1] = 2 * DP[0][0];
        }
        for(int i = 1; i <= n; ++i) {
            DP[i][0] = DP[i][1] = 1e15;
            int left = pts[i-1], right = pts[i];
            for(auto x: FinalSeg[i]) {
                //ptl..1....1..2...2...ptr
                right = x.second;
                // Determine which is minimum, 2*going left or 2* going right
                int state = min(DP[i-1][0] + 2 *(left - pts[i-1]), DP[i-1][1] + left - pts[i-1]) + pts[i] - right;
                DP[i][0] = min(DP[i][0], state);
                DP[i][1] = min(DP[i][1], state + pts[i] - right);
                left = x.first;
            }
            int state = min(DP[i-1][0] + 2 *(left - pts[i-1]), DP[i-1][1] + left - pts[i-1]);
            DP[i][0] = min(DP[i][0], state);
            DP[i][1] = min(DP[i][1], state);
        }
        cout << min(DP[n][0], DP[n][1]) << '\n';
        for(int i = 0; i <= n; ++i) FinalSeg[i].clear();
    }
}
