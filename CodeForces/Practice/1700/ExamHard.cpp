#include<bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
#define int int64_t
vector<int> T(101, 0);

void solve(){
    int n, M;
    cin >> n >> M;
    int x; cin >> x; cout << "0 "; T[x]++; 
    int64_t totalSoFar = x;
    for(int i = 1; i < n; ++i){
        int k;
        cin >> k;
        if( k + totalSoFar <= M){
            totalSoFar+=k;
            T[k]++;
            cout << "0 ";
            continue;
        }
        int64_t l = totalSoFar - M + k;
        int64_t soFar = 0;
        int cnt = 0;
        for(int i = 100; i >=1; ++i){
           int lets = (l - soFar + i-1) / i;
           if(T[i] >= lets){
               cnt += lets;
               cout << cnt << " ";
               totalSoFar+= k;
               T[k]++;
               break;
           }
           soFar += T[i] * i;
           cnt += T[i];
        }
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();
}

