#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> a(n), b(n); for(auto &x : a) cin >> x; for(auto &x : b) cin >> x;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        reverse(b.begin(), b.end());
        vector<int> prefA, prefB;
        prefA.reserve(2*n+5), prefB.reserve(2*n + 5);
        prefA.push_back(0); prefB.push_back(0);
        for(auto x : a) prefA.push_back(prefA.back() + x);
        for(auto x : b) prefB.push_back(prefB.back() + x);
        int N = 0;
        while(true) {
            int els = n - n/4;
            int sz = (int)prefA.size();
            int64_t suma = prefA.back() - prefA[sz-els-1];
            int64_t sumb = prefB[els];
            if(suma >= sumb){ cout << N << '\n'; break; }
            N++;
            n++;
            prefA.push_back(prefA.back() + 100);
            prefB.push_back(prefB.back());
        }
    }
}

