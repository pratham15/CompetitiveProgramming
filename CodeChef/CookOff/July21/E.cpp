#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while(T--) {
        int n, k; cin >> n >> k;
        vector<int> a(n); 
        vector<int> freq(1001, 0);
        for(auto &x : a) {cin >> x; freq[x]++;}
        if(k == 1) cout << *max_element(freq.begin(), freq.end());

    }
}

