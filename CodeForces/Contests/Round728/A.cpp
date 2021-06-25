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
        for(int i = 0; i < n; ++i) a[i] = i+1;
        for(int i = 1; i < n; i+= 2) swap(a[i], a[i-1]);
        if(n%2 == 1) swap(a[n-1], a[n-2]);
        for(auto x : a) cout << x << ' ';
        cout << '\n';
    }
}

