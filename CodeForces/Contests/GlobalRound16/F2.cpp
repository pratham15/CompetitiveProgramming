#include<bits/stdc++.h>
using namespace std;

#define int int64_t
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        //Step 1 - Input and sort
        //Step 2 - Remove segments which have points b/w
        //Step 3 - Remove wrapped segments, i.e. remove parent segment
        //Step 4 - Divide Segmnets based on which points they lie between
        //Step 5 - Final DP soln

        // ----1----
        int n, m;
        cin >> n >> m;
        vector<int> pts(n); for(auto &x : pts) cin >> x;
        vector<pair<int, int>> seg(m); for(auto &x: seg) cin >> x.first >> x.second;
        sort(pts.begin(), pts.end());
        sort(seg.begin(), seg.end(), [](pair<int, int> &a, pair<int, int> &b){
                if(a.first == b.first) 
                    return a.second > b.second;
                return a.first <  b.first;
                });

        // ----2----
        vector<pair<int, int>> filteredSeg;
        for(int i = 0; i < m; ++i) {
            int x = lower_bound(pts.begin(), pts.end(), seg[i].first) - pts.begin();
            if(x == n) filteredSeg.push_back(seg[i]);
            else if(pts[x] > seg[i].second) filteredSeg.push_back(seg[i]);
        }
        
        //---3----
        
        seg = filteredSeg;
        filteredSeg.clear();
        m = seg.size();
        for(int i = 0; i < m; ++i) {
            if(filteredSeg.empty()) filteredSeg.push_back(seg[i]);
            else {
                while(filteredSeg.size() >= 1 && seg[i].second <= filteredSeg.back().second) filteredSeg.pop_back();
                filteredSeg.push_back(seg[i]);
            }
        }
        
        
        /*
        cout << "\n\n";
        for(auto x : filteredSeg) cout << x.first << ' ' << x.second << '\n';
        */
        
        //---4---
        vector<pair<int, int>> segments[n+1];
        pts.push_back(1e15);
        m = filteredSeg.size();
        int cur = 0;
        
        for(int i = 0; i < m; ++i) {
            while(filteredSeg[i].second >= pts[cur]) cur++;
            segments[cur].push_back(filteredSeg[i]); 
        }
        
        for(int i = 0; i <= n; ++i) 
            if(segments[i].size() > 1) sort(segments[i].begin(), segments[i].end());

        /*
        cout << "\n";
        for(auto x : segments) {
            for(auto y : x) cout << y.first << ' ' << y.second << '\n';
            cout << '\n';
        }
        */
        
        
        
        //---5--- Final DP and soln
        vector<vector<int>> DP(n+1, vector<int> (2));
        if(segments[0].size() == 0)
            DP[0][0] = DP[0][1] = 0;

        else {
            DP[0][0] = pts[0] - segments[0][0].second;
            DP[0][1] = DP[0][0] * 2;
        }

        for(int i = 1; i <= n; ++i) {
            DP[i][0] = DP[i][1] = 1e15;
            int l = pts[i-1], r = pts[i];
            for(auto x: segments[i]) {
                r =  x.second;
                int state = min(DP[i-1][0] + 2 * (l - pts[i-1]), DP[i-1][1] + l - pts[i-1]) + pts[i] - r;
                DP[i][0] = min(DP[i][0], state);
                DP[i][1] = min(DP[i][1], state + pts[i] - r);
                l = x.first;
            }
            int state = min(DP[i-1][0] + 2 * (l-pts[i-1]), DP[i-1][1] + l - pts[i-1]);
            DP[i][0] = min(DP[i][0], state);
            DP[i][1] = min(DP[i][1], state);
        }
        cout << min(DP[n][0], DP[n][1]) << '\n';
       
    }
}

