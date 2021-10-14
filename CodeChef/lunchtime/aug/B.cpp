
#include<bits/stdc++.h> using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(auto &x : a) cin >> x;
        int ans = n;
        for(int i = 1; i < n; ++i) 
            if(a[i] - a[0] != i) {ans = 1; break; }
        cout << ans << '\n';
    }
}

