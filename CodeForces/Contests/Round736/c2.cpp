#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int ans = 0;
    int n, m; cin >> n >> m;
    vector<set<int>> s(n+1);
    while(m--){
        int a, b;
        cin >> a >> b;
        if(a>b) swap(a, b);
        s[a].insert(b);
    }
    for(int i = 1; i <= n; ++i) 
        if(s[i].empty()) ans++;

    cin >> m;
    while(m--) {
        int k; cin >> k;
        int a, b;
        if(k==3) cout << ans << '\n';
        else {
            cin >> a >> b;
            if(a>b) swap(a, b);
            if(k==1) {
                if(s[a].empty()) ans--;
                s[a].insert(b);
            }
            else {
                s[a].erase(b);
                if(s[a].empty()) ans++;
            }
        }
    }
}

