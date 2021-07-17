#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    int k = 1;
    while(t--){
        cout << "Case #" << k << ": ";
        k++;
        int n, m;
        cin >> n >> m;
        set<int> a;
        for(int i = 0; i < n; ++i){
            int x, y;
            cin >> x >> y;
            if(a.count(x) && a.count(y)) continue;
            for(int j = x; j <= y; ++j){
                if(a.count(j)) break;
                else a.insert(j);
            }
            for(int j = y; j>= x; --j) {
                if(a.count(j)) break;
                else a.insert(j);
            }
        }
        for(int i = 0; i < m; ++i) {
            int x; cin >> x;
            auto it = a.lower_bound(x);
            if(it == a.end()) {
                it--;
                cout << *it << ' '; 
                a.erase(it);
            }
            else if(*it == x) 
                cout << *it << ' ', a.erase(it);
            else {
                auto it2 = it;
                it2--;
                if(x - *it2 < *it - x) {
                    cout << *it2 << ' ';
                    a.erase(*it2);
                }
                else if( x - *it2 == *it - x) {
                    cout << *it2 << ' ';
                    a.erase(it2);
                }
                else {cout << *it << ' ';
                    a.erase(*it);
                }
            }
        }
        cout << '\n';
    }
}
