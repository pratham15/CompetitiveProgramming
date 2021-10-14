#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n, d;
        cin >> n >> d;
        vector<int> a(n); for(auto &x : a) cin >> x;
        vector<int> visited(n); 
        if(count(a.begin(), a.end(), 1) == 0) {
            cout << "0\n";
            continue;
        }
        bool noAns = false;
        int ans = 1;
        for(int i = 0; i < n; ++i) {
            if(visited[i]) continue;
            vector<int> slv;
            bool zero = false;
            for(int j = i; visited[j] == 0; j = (j+d)%n) {
                if(a[j] == 0) zero = true;
                visited[j] = 1;
                slv.push_back(a[j]);
            }
            if(zero == false) noAns = true;
            int x = slv.size();
            int newAns = 1;
            bool terminate = true;
            for(int j = 1; j < x; ++j) {
               if(slv[j] == slv[j-1] && slv[j] == 1) newAns++, terminate = false;
               else {
                   ans = max(ans, newAns), newAns = 1;
                   terminate = (slv[j] == 0);
               }
            }
            if(terminate == false) {
                for(int j = 0; j < x; ++j)
                    if(slv[j] == 0) break;
                    else newAns++;
            }
            ans = max(ans, newAns);
        }
        cout << (noAns ? -1 : ans) << '\n';
    }
}

