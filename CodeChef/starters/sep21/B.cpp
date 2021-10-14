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
        if(n==2) {
            cout << "-1 -1\n-1 -1\n";
            continue;
        }
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < n; ++j)
                if(i==j) cout << "-1 ";
                else cout << "1 ";
            cout << "\n";
        }
    }
}

