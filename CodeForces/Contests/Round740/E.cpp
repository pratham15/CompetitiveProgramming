#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> a(n); 
        bool g = true;
        for(int i = 0; i < n; ++i) {
            cin >> a[i];
            if(a[i]%2 == i%2) g = false;
        }
        if(!g) { cout << -1 << '\n'; continue; }
        vector<int> ans;
        for(int i = n; i >1; i -= 2) {
            if(is_sorted(a.begin(), a.end())) break;
            int x = find(a.begin(), a.end(), i) - a.begin();
            reverse(a.begin(), a.begin() + x + 1);
            ans.push_back(x+1);
            int y = find(a.begin(), a.end(), i-1) - a.begin();
            reverse(a.begin(), a.begin() + y);
            ans.push_back(y);
            ans.push_back(y+2);
            reverse(a.begin(), a.begin() + y + 2);
            ans.push_back(3);
            reverse(a.begin(), a.begin() + 3);
            ans.push_back(i);
            reverse(a.begin(), a.begin() + i);
            //for(auto &x : a) cout << x << ' ';
            //cout << '\n';
        }
        cout << ans.size() << '\n';
        for(auto &x : ans) cout << x << ' ';
        cout << '\n';
    }
}

/*
 5, 2, 1, 4, 3
 1, 2, 5, 4, 3
 3, 4, 5, 2, 1
 4, 5, 3, 2, 1
 1, 2, 3, 4, 5
*/



