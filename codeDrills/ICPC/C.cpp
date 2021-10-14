#include<bits/stdc++.h>
using namespace std;
#define int int64_t
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n; cin >> n; 
        vector<int> a[n], elems;
        set<int> s[n];
        for(int i = 0; i < n; ++i) {
            int k; cin >> k;
            elems.push_back(k);
            while(k--) {
                int x; cin >> x;
                a[i].push_back(x);
                s[i].insert(x);
            }
        }
        int64_t total = 0 ;
        for(int i = 1; i < elems.size(); ++i) {
            elems[i] += elems[i-1];
            total += elems[i];
        }
        for(int i = 0; i < n; ++i) {
            int N = a[i].size();
            if(N==1) continue;
            int current = 1;
            vector<int> divs;
            divs.push_back(0);
            for(int j = 0; j < N-1; ++j) {
                auto it = s[i].upper_bound(a[i][j]);
                if(it == s[i].end()){total += min(current, N-j-1); divs.push_back(current); current = 1;}
                else if(a[i][j+1] != *it) {total += min(current,N-j-1); divs.push_back(current); current = 1;}
                else current++;
            }
            divs.push_back(current);
            // sort(divs.begin(), divs.end());
            // for(auto x : divs) cout << x << ' ';   cout << total << '\n'; cout << '\n';
            if(divs.size() == 2) continue;
            for(int i = 2; i < divs.size(); ++i) {
                divs[i] += divs[i-1];
                total += divs[i];
            }
        }
        cout << total << '\n';
    }
}

