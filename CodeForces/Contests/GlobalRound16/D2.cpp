#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        vector<int> a(n*m);
        for(auto &x  :a) cin >> x;
        vector <int>b = a;
        sort(a.begin(), b.end());
    }
}


