#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(auto &x : a) cin >> x;
        sort(a.begin(), a.end());
        if(count(a.begin(), a.end(), 0) >= 1) {
            cout << "Yes\n"; continue;
        }
        bool g = false;
        if(n==1) {cout << "No\n"; continue;}
        map<int, int> mp;
        for(auto x : a){
            mp[x]++;
            if(mp[x]>1) g = true;
        }

        for(int i = 0; i < n; ++i)
            for(int j = i+1; j < n; ++j) 
                for(int k = 0; k < n; ++k) {
                    if(k!= i && k!=j && a[j] - a[i] == a[j]) g = true;
                }
        set<int> vis;
        for(int i = 0; i < (1<<n); ++i) {
            int sm = 0;
            for(int j = 0; j < n; ++j) {
                if(i& (1 << j)) sm += a[j];
            }
            if(vis.count(sm) > 0) g = true;
            vis.insert(sm);
        }
        cout << (g?"Yes\n":"No\n");
    }
}

