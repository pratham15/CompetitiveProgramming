#include<bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
    int n;
    cin >> n;
    vector<int> heirarchy;
    auto out = [&](){
        for(int k  = 0; k < heirarchy.size()-1; ++k) 
            cout << heirarchy[k] << ".";
        cout << heirarchy.back() << "\n";
    };
    for(int i = 0; i < n; ++i){
        int k;
        cin >> k;
        if(heirarchy.empty()|| k == 1){
            heirarchy.push_back(k);
            out();
        }
        else
          for(int j = heirarchy.size()-1; j>=0; --j){
            if(heirarchy[j] !=  k-1) heirarchy.pop_back();
            else {
                heirarchy.pop_back();
                heirarchy.push_back(k);
                out();
                break;
            }
          }

    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    t = 1;
    cin >> t;
    while(t--) solve();
}

