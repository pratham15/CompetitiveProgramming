#include<bits/stdc++.h>
using namespace std;
int fix (int a, int b) {
        vector<int> l(30), r(30);
                int x = 1;
            for(int i = 0; i < 30; ++i){
                    if(a&x) l[i] = 1; 
                    if(b&x) r[i] = 1;
                    x <<= 1;
                }
                int ans = 0;
                x = 1;
                for(int i = 0; i < 30; ++i) {
                    if(l[i] == 1 && r[i] == 0) ans |= x;
                    x <<= 1;
                }
                return ans;
            };

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n); for(auto &x : a) cin >> x;
        vector<int> ans;
        ans.push_back(0);
        for(int i = 1; i < n; ++i){
            if((a[i] & a[i-1]) == a[i-1]){ 
                    ans.push_back(0);}
            else {
                int x = fix(a[i-1], a[i]);
                ans.push_back(x);
                a[i] ^= x;
            }
        }
        for(auto y : ans) cout << y << ' ';
        cout << '\n';
    }
}

