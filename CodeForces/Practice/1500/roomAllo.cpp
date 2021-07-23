#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n; cin >> n;
    vector<array<int, 3>> a(n);
    vector<int> ans(n);
    for(int i = 0; i < n; ++i){
        cin >> a[i][0] >> a[i][1];
        a[i][2] = i;
    }
    sort(a.begin(), a.end());
    int room = 1;
    multiset<pair<int, int>> alloc;
    alloc.insert({a[0][1], room});
    ans[a[0][2]] = room;
    for(int i = 1; i < n; ++i) {
        pair<int, int> demo = *alloc.begin();
        if(a[i][0] > demo.first) {
            alloc.erase(alloc.begin());
            ans[a[i][2]] = demo.second;
            alloc.insert({a[i][1], demo.second});
        }
        else {
            room++;
            alloc.insert({a[i][1], room});
            ans[a[i][2]] = room;
        }
    }
    cout << room << '\n';
    for(auto x : ans) cout << x << ' ';
}

