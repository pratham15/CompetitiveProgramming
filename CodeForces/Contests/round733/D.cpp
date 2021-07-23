#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while(T--) {
        int n; cin >> n;
        set<int> s;
        for(int i = 1; i <= n; ++i) s.insert(i);
        vector<int> a(n); for(auto &x : a) cin >> x;
        vector<int> ans(n);
        vector<int> save(n+1);
        int k = 0;
        for(int i = 0; i < n; ++i) {
            if(s.find(a[i]) != s.end()){
                    s.erase(s.find(a[i]));
                    k++;
                    save[a[i]] = i;
                    ans[i] = a[i];
            }
        }        
        int N = s.size();
        if(N == 1) {
            for(int i = 0; i < n; ++i) {
                if(ans[i] == 0) {
                    if(*s.begin() == i+1) {
                        ans[i] = a[i];
                        ans[save[a[i]]] = *s.begin();
                    }
                    else ans[i] = *s.begin();
                    break;
                }
            }
        }
        else {
            for(int i = 0; i < n; ++i) {
                if(ans[i] == 0 && s.find(i+1)!= s.end()) {
                    if(*s.begin() != i+1) {
                        ans[i] = *s.begin();
                        s.erase(s.begin());
                    }
                    else {
                        ans[i] = *prev(s.end());
                        s.erase(prev(s.end()));
                    }
                }
            }
            for(int i = 0; i < n; ++i) {
                if(ans[i] == 0) {ans[i] = *s.begin(); s.erase(s.begin());}
            }
        }
        
        cout << k << '\n';
        for(auto x : ans) cout <<x << ' ';
        cout << '\n';
       
    }
}

