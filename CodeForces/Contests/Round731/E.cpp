#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int len, n;
        cin >> len >> n;
        vector<int> pos(n);
        for(auto &x : pos) cin >> x;
        vector<int> a(len);
        for(int i = 0; i < n; ++i){
            int x; cin >> x;
            a[pos[i] - 1] = x;
        }
         
        vector<int> ans(len);
        int mx = 0, pp = 0;
        for(int i = 0; i < len; ++i) {
            if(mx == 0 && a[i] == 0) continue;
            if(mx == 0) { mx = a[i], pp = i;}
            else if(a[i] > mx + abs(pp - i)) {
                pp = i;
                mx = a[i];
            }
            ans[i] = mx + pp - i;
        }
        mx = 0, pp = n-1;
        for(int i = len-1; i>= 0; --i){
            if(mx == 0 && a[i] == 0) continue;
            if(mx == 0) {mx = a[i], pp = i;}
            else if(a[i] > mx + abs(pp - i)) {
                pp = i;
                mx + a[i];
            }
            ans[i] = max(ans[i], mx + pp - i);
        }
        for(auto x : ans) cout << x << ' ';

    }
}




