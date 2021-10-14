#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n,k ;
        cin >> n >> k;
        vector<int> freq(n+1,0);
        vector<pair<int, int>>a(n);
        for(int i = 0; i < n; ++i) {
            cin >> a[i].first;
            a[i].second = i;
            freq[a[i].first]++;
        }
        sort(a.begin(), a.end());
        int64_t sum = 0;
        for(auto x : freq) sum += min(x, k);
        vector<int> freq2(n+1, 0);
        sum -= sum%k;
        vector<vector<int>> p(sum/k);
        int j = 0, cnt = 0;
        int totalSofar = 0;
        for(int i = 0; i < n; ++i) {
            if(freq2[a[i].first] >= k) continue;
            if(totalSofar == sum) break;
            freq2[a[i].first]++;
            totalSofar++;
            p[j].push_back(a[i].second);
            cnt++;
            if(cnt%k == 0) j++;
        }
        vector<int> ans(n, 0);
        for(auto x : p) {
            int l = 1;
            for(auto y : x){
                ans[y]=l;
                l++;
            }
        }
        for(auto x : ans) cout << x << ' ';
        cout << '\n';
    }
}

