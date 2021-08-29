#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> a[n], b[n];
        for(auto &x : a) {
            int y; cin >> y;
            for(int i = 0; i <= 29; ++i) 
                if(y & (1 << i)) x.push_back(1);
                else x.push_back(0);
        }
        
        for(auto &x : b) {
            int y; cin >> y;
            for(int i = 0; i <= 29; ++i) 
                if(y & (1 << i)) x.push_back(1);
                else x.push_back(0);
        }

        /*
        for(auto &x : a) {
            for(auto y : x) cout <<y << ' ';
            cout << '\n';
        }
        cout << '\n';
        for(auto &x : b) {
            for(auto y : x) cout <<y << ' ';
            cout << '\n';
        }

        cout << '\n';
        */
        int total = 0;
        int ans = 0;
        set<int> fix;
        for(int i = 29; i >= 0; --i) {
            int ne = 0;
            bool bd = false;
            vector<int> swp, need;
            for(int j = 0; j < n; ++j) {
               if(a[j][i] == 0 && b[j][i] == 0) {
                   bd = true;
                   break;
               }
               else if(a[j][i] == 0 && b[j][i] == 1) {
                   if(fix.find(j) != fix.end()) {
                       bd = true;
                       break;
                   }
                   swap(a[j], b[j]);
                   fix.insert(j);
                   swp.push_back(j);
                   ne++;
               }
               else if(a[j][i] == 1 && b[j][i] == 0) {
                   if(fix.find(j) != fix.end()) continue;
                   fix.insert(j);
                   need.push_back(j);
               }
            }
            if(bd == false) {
                total |= (1 << i);
                ans += ne;
            }
            else{
                for(auto x : need){
                    fix.erase(x);
                }
                for(auto x : swp) {
                    fix.erase(x);
                    swap(a[x], b[x]);
                }
            }
        }
        cout << total << ' ' << ans << '\n';
    }
}

