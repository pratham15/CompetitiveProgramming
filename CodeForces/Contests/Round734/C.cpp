#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;

    auto solve = [&](vector<string> &words, int n, char c, int sum) -> int{
         vector<int> cnt;
         for(int i = 0; i < n; ++i) {
             int x = count(words[i].begin(), words[i].end(), c);
             cnt.push_back(x - words[i].length() + x);
         }
         sort(cnt.rbegin(), cnt.rend()); 
         int ans = 0, sz = 0;
         for(auto x : cnt) {
             if(ans + x > 0) ans += x, sz++;
             else break;
         }
         return sz;
    };

    while(T--) {
        int ws; cin >> ws;
        vector<string> a(ws);
        int sum = 0;
        for(auto &x : a){ cin >> x; sum += x.length(); }
        int ans = 0;
        for(int i = 0; i < 5; ++i) {
            ans = max(solve(a,  ws, char('a'+i),sum), ans);
        }
        cout << ans << '\n';
    }
}

