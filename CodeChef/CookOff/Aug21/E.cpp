#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    vector<int> a = {0, 1, 2};
    for(int i = 3; i < 34; ++i) 
        a.push_back(i*(i-1) + 1);
                
    while(t--) {
        int n; cin >> n;
        int x = lower_bound(a.begin(), a.end(), n) - a.begin();
        if(n==1)
            cout << 1 << '\n';
        else if(n==2) 
            cout <<"1 2\n";
        else {
            for(int i = 1; i < x; ++i) {
                for(int j = x-1; j >= i; --j) {
                    cout << x << ' ';
                    n--;
                    if(n==0) break;
                    cout << j << ' ';
                    n--;
                    if(n==0) break;
                }
                if(n==0) break;
            }
            if(n==1) cout << x;
            cout << '\n';
        }
    }
}

