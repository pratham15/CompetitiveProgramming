#include<bits/stdc++.h>
using namespace std;

const int maxN = 2010;
vector<int> a(maxN, 0), processing(maxN, 0), curProcess(maxN, 0);
vector<int> done(maxN, 0);
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n, k;
    cin >> n >> k;
    for(int i = 0; i < n; ++i) cin >> a[i];
    for(int i = 0; i < k; ++i) processing[i] = a[i];
    int c = k, tasksDone = 0, ans = 0;
    while(tasksDone< n){
        int tests = tasksDone * 100.0/n + 0.5;
        for(int j = 0; j < k; ++j){
            if(processing[j] == 0) continue;
            curProcess[j]++;
            if(curProcess[j] == tests) {
                if(done[j] != 1) 
                ans++;
                done[j] = 1;
            }
            if(curProcess[j] == processing[j]) {
                tasksDone++;
                curProcess[j] = 0;
                done[j] = 0;
                processing[j] = a[c];
                c++;
            }
        }
    }
    cout << ans << '\n';
}
            
