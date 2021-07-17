#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for(int i = 0; i < n; ++i) {
            cin >> a[i];
            b[i] = a[i];
        }
        vector<pair<int, int>> comp(N);
        bool cont = false;
        sort(b.begin(), b.end());
        for(int i = 0; i < n; ++i) {
            if(i%2 == 0) 
                comp[b[i]].first++;
            else comp[b[i]].second++;
        }
        for(int i = 0; i < n; ++i) {
            if(i%2==0) {
                if(comp[a[i]].first == 0) cont = true;
                else comp[a[i]].first--;
            }
            else {
                if(comp[a[i]].second == 0) cont = true;
                else comp[a[i]].second--;
            }
        }
        if(cont) cout << "No\n";
        else cout << "Yes\n";
    }
}

