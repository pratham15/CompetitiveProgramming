#include<bits/stdc++.h>
using namespace std;
mt19937_64 rng(chrono::high_resolution_clock::now().time_since_epoch().count());
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    freopen("in.txt", "w", stdout);
    cout << "1\n300 300\n";
    for(int i = 0; i < 9000; ++i) 
        cout << rng() % (int) 1e9 <<  ' ';
}

