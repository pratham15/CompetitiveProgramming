#include<bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
    int n;
    string s;
    cin >> n >> s;
    deque<int> D,R;
    for(int i = 0; i < n; ++i){
        if(s[i] == 'D') D.push_back(i);
        else R.push_back(i);
    }
    auto popd = [&](){
        D.pop_front();
        R.pop_front();
    };
    while(!D.empty() && !R.empty()){
        int x = D.front();
        int y = R.front();
        popd();
        if(x < y) D.push_back(x+n);
        else R.push_back(y+n);
    }
    cout << (D.empty() == true ? "R" : "D") << '\n';
}



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();
}

