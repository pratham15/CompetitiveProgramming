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
        if(n%4 != 0) {
            cout << "NO\n";
            continue;
        }
        vector<int> a, b;
        cout << "YES\n";
        for(int i = 1; i <= n; ++i) {
            if((i % 4 == 1) || (i % 4 == 0)) a.push_back(i);
            else b.push_back(i);
        }
        sort(a.begin(), a.end());
        sort(b.rbegin(), b.rend());
        for(auto &x : a) cout << x << " ";
        cout << '\n';
        for(auto &x : b) cout << x << ' ';
        cout << '\n';
    }
}

