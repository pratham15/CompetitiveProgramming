#include<bits/stdc++.h>
using namespace std;
vector<int> a;

int solve(

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        a.resize(n);
        for(auto &x :a) cin >> x;
        sort(a.begin(), a.end());
        vector<int> b = a;
        erase(unique(b.begin(), b.end()), b.end());
        if(b.size() <= (n/2 + 1)) {
            cout << -1 << '\n';
            continue;
        }
        for(int i = 0; i + 1 < n; ++i) {
            for(int j = i + 1; j < n; ++j){

            }
        }
    }
}

