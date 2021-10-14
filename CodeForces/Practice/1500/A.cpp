#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int64_t a, b;
    cin >> a >> b;
    int64_t x = a - b;
    cout << (int64_t)pow(32LL, x);
}

