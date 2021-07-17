#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n), b(n);
        int sum1 = 0, sum2 = 0;
        for(auto &x : a) {cin >> x; sum1 += x;}
        for(auto &x : b) {cin >> x; sum2 += x;}
        if(sum1 != sum2) {cout << "-1\n"; continue;}
        vector<pair<int, int>> ans;
        while(1){
            bool change = false;
            int i,j;
            for(int l = 0; l < n; ++l) {
                if(a[l] > b[l]) {i = l; change = true;}
                if(a[l] < b[l]) j = l;
            }
            if(change == false) break;
            ans.push_back({i+1, j+1});
            a[i]--, a[j]++;
        }
        if(ans.size() == 0) cout << "0\n";
        else {cout << ans.size() << '\n';
            for(auto x : ans) cout << x.first << ' ' << x.second << '\n';
        }
    }
}

