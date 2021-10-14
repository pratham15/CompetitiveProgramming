#include<bits/stdc++.h>
using namespace std;
#define int int64_t
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    vector<int> a = {3,5, 7, 11, 13, 17, 23, 29, 31, 37, 43, 47, 53, 59, 61};
    while(t--) {
        int64_t n;
        cin >> n;
        if(n%2 == 0) 
            cout << n * 2 << ' ' << n << '\n';
        else {
            for(auto x: a) 
                if((n % x) > 0){
                    cout << n*x << ' ' << n * (x-1) << '\n';
                    break;
                }
        }
    }
}


