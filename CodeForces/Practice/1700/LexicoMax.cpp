#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(auto &x : a) cin >> x;
        vector<int> ansMn(n), ansMx(n);
        int change = 1e9+10;
        set<int> comp;
        for(int i = 0 ; i < n; ++i){
            if(a[i] != change) ansMx[i] = a[i], ansMn[i] = a[i], change = a[i];
            comp.insert(change);
        }
        set<int> msMn, msMx;
        for(int i = 1; i <= n; ++i){
            if(comp.find(i) == comp.end() ) msMn.insert(i), msMx.insert(i);
        }
        auto it = msMn.begin();
        for(int i = 0; i < n; ++i){
            if(ansMn[i] == 0) {
                ansMn[i] = *it;
                it++;
            }
        }
        change = 0;
        for(int i = 0; i < n; ++i){
            if(ansMx[i] != 0) change = ansMx[i];
            if(ansMx[i] == 0){
                auto it = msMx.lower_bound(change);
                it--;
                ansMx[i] = *it;
                msMx.erase(it);
            }
        }
        for(auto x: ansMn) cout << x << ' ';
        cout << '\n';
        for(auto x: ansMx) cout << x << " ";
        cout << '\n';
    }
}
