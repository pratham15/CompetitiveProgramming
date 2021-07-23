#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, k; cin >> n >> k;
    vector<int> a;
    multiset<int> ms;
    int ans = 0, cnt = 0;
    for(int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        a.push_back(x);
        if(i >= k) {
            ms.erase(ms.find(a[i-k]));
            if(ms.count(a[i-k]) == 0) cnt--;
        }
        if(ms.count(x) == 0) cnt++;
        ms.insert(x);
        ans = max(cnt, ans);
    }
    cout << ans << '\n';
}
 
