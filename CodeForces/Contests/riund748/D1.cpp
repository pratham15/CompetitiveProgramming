#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> &a) {
    vector<int> b;
    for(int i = 1; i < a.size(); ++i) 
        b.push_back(a[i] - a[i-1]);

    for(int i = 1; i < b.size(); ++i) b[0] = __gcd(b[0], b[i]);
    return b[0];
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n); for(auto &x: a) cin >> x;
        sort(a.begin(), a.end());
        vector<int> s = a;
        s.erase(unique(s.begin(), s.end()), s.end());
        if(s.size() == 1) {
            cout << "-1\n";
            continue;
        }
        int x = s.size();
        if(x <= n/2) {
            cout << solve(s);
        }
        else {
            x = n/2;
            for(int i = 0; i <=
        }

    }
}

