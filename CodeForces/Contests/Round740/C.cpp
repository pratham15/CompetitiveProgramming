#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int a, b;
        cin >> a >> b;
        int ttl = a + b;
        int gcw1 = (ttl + 1) / 2, gcw2 = (ttl/2);
        if(a<b) swap(a, b);
        vector<int> ans;
        if(ttl % 2 == 0) {
            int x = a - ttl/2;
            ans.push_back(x);
            for(int i = x*2 + 2; i <= ttl; i += 2)
                ans.push_back(ans.back() + 2);
        }
        else {
            //alice first serve
            int x =  a - gcw1;
            ans.push_back(x);
            for(int i = x*2 + 2; i <= ttl; i += 2)
                ans.push_back(ans.back() + 2);
            
            //b first
            int y = x+1;
            ans.push_back(y);
            for(int i = y*2 + 1; i <= ttl; i += 2) 
                ans.push_back(ans.back() + 2);
        }
        set<int> s;
        for(auto x : ans) s.insert(x);
        cout << s.size() << '\n';

        for(auto x : s) cout << x << ' ';
        cout << '\n';
    }
}

