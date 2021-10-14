#include<bits/stdc++.h>
using namespace std;
mt19937_64 rng(chrono::high_resolution_clock::now().time_since_epoch().count());
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n = 10;
    cout << n << '\n';
    for(int i =0; i < n; ++i) 
        cout << rng() << '\n';
}

