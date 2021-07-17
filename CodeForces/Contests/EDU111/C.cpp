#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(auto &x :a ) cin >> x;
        int64_t ans = 0;
        for(int i = 0; i < n; ++i){
            bool goodSoFar = true;
            for(int j = i; j < n; ++j){
                for(int x = i; x <= j; ++x){
                    for(int y = x + 1; y <= j; ++y){
                        for(int z = y + 1;z <= j; ++z){
                            if(a[x] <= a[y] && a[y] <= a[z]) goodSoFar = false;
                            if(a[x] >= a[y] && a[y] >= a[z]) goodSoFar = false;
                        }
                    }
                }
                if(goodSoFar == false) break;
                else ans++;
            }
        }
        cout << ans << '\n';
    }
}

