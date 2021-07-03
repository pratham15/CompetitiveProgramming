#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n; cin >> n;
        int e = 0, o = 0;
        for(int i = 0; i < 2*n; ++i){
            int x; cin >> x;
            if(x&1) o++;
            else e++;
        }
        if(e == o) cout << "Yes\n";
        else cout << "No\n";
    }
}

