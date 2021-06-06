#include<bits/stdc++.h>
using namespace std;
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
    int n;    
    cin >> n;
    vector<int> a(n);
    for(auto &x : a) cin >> x;
    int k = n;
    while(a.size() <=300){
        n = k;
        bool end = true;
        for(int i = 0; i < n; ++i){
            for(int j =i+1 ; j < n; ++j){
                if(find(a.begin(), a.end(), abs(a[i]-a[j])) == a.end()){
                    a.push_back(abs(a[i] - a[j]));
                    end = false;
                    k++;
                }
            }
        }
        if(end && a.size() <= 300){
            cout << "Yes\n";
            cout << a.size() << "\n";
            for(auto x : a) cout << x <<' ';
            cout << "\n";
            return;
        }
    }
    cout <<"No\n";
       
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    t = 1;
    cin >> t;
    while(t--) solve();
}

