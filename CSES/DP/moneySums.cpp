#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 10;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    set<int> s;
    int dp[N];
    dp[0] = 0;
    int sum = 0;
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &x : a) cin >> x;
    for(int coin : a) {
        sum += coin;
        for(int j = sum; j>= 0; --j) {
            if(j==0) {
                dp[coin] = 1;
                s.insert(coin);
            }
            if(j >= coin) {
                if(dp[j-coin]) dp[j]= 1;
            }
            if(dp[j]) s.insert(j);
        }
    }
    cout << s.size() << '\n';
    for(auto x : s) cout << x << ' ';

}

