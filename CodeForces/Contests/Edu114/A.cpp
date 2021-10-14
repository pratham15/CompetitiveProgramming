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
        for(int i = 1; i <= n; ++i) {
            cout << string(i, '(');
            cout << string(i, ')');
            for(int j = i; j < n; ++j) cout << "()";
            cout << "\n";
        }
    }
}


