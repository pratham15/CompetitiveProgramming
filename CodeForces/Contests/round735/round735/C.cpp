#include<bits/stdc++.h>
using namespace std;
mt19937_64 rng(chrono::high_resolution_clock::now().time_since_epoch().count());
int main(){
    int T;
    cin >> T;
    while(T--) {
        int n, m;
        n = rng() % (int) 1e5;
        m = rng() % (int) 1e5;
        if(n > m) {
            swap(n, m);
        }
        cout << n << ' ' << m << '\n';
        vector<int> freq(33,0), freq2(33, 0);
        for(int i = 0; i < 33; ++i) {
            if(1 & (n >> i)) freq[i]++;
            if(1 & (m >> i)) freq2[i]++;
        }
        vector<int> a(m+1);
        for(int i = 0; i <= m; ++i) {
            a[i] = (n^i);
      //      cout << a[i] << ' ';
        }
        sort(a.begin(), a.end());
        int x = 0;
        for(int i = 0; i <= m ;++i) 
            if(a[i] != i) { x =  i ; break;}
        for(auto x : freq) cout << x << ' ';
        cout << '\n';
        for(auto x : freq2) cout << x << ' ';
        cout << '\n';
        cout << x << '\n';
        for(int i = 0; i < 33; ++i) {
            if(1 & x >> i) cout << 1 << ' ';
            else cout << 0 << ' ';
        }
        cout << '\n';
        cout << "\n";
    }
 }


