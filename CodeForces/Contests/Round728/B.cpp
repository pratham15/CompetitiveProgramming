#include<bits/stdc++.h>
using namespace std;

const int N = 2e5 + 10;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n), mp(N, 1e6); 
        for(int i = 0; i < n; ++i){ 
            cin >> a[i];
            mp[a[i]] = i+1;
        }
        int64_t ans = 0;
        for(int i = 3; i < 2 * n; ++i)
            for(int j = 1; j <= sqrt(i); ++j)
                if(i%j==0 && i!= j*j)
                  ans += (mp[j] + mp[i/j] == i);
        cout << ans << '\n';
    }
}
                   


