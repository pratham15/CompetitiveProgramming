#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
//    freopen("in.txt", "r", stdin);
    int n, x;
    cin >> n >> x;
    vector<int> coins(n);
    for(auto &x : coins) cin >> x;
    vector<int> a(x+1);
    a[0] = 1;
    for(int c : coins)
        for(int j = 1; j <= x; ++j){
            if(j >= c) {
                a[j] += a[j-c];
                if(a[j] >= mod) a[j] -= mod;
            }
        }

    cout << a[x] << '\n';
}

