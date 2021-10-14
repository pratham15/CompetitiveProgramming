#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n, m, k;
        cin >> n >> m >> k;
        k--;
        if(m < n-1 || (k == 0 && n!= 1) {
            cout << "NO\n";
            continue;
        }
        if(n==1 || k >=  n-1) {
            cout << "YES\n";
            continue;
        }
        m -= n;

        
    }
}

