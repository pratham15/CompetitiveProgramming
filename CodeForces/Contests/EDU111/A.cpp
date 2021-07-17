#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int N; cin >> N;
        int ans = 1, cur = 3;
        N--;
        while(N) {
            if(cur > N) {ans += 1; break;} 
            ans++;
            N -= cur; 
            cur += 2;
        }
        cout << ans << '\n';
    }
}
