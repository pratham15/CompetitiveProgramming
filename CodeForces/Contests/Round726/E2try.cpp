#include<bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
const int p = 31, m = 1e9 + 7;
int64_t hashValue = 0, powe = 1;
void solve(){
    int n, k;
    string s;
    cin >> n >> k >> s;
    vector<int64_t> hashS(n, 0), dummyHashS;
    vector<int64_t> pV(n);
    int indx = 0;
    string dummy= "";
    int originalLength = 1;
    dummy += s[0];
    dummyHashS.push_back(hashS[0]);
    for(char c : s){
        pV[0] = p;
        hashValue = (hashValue + (c-'a' + 1) * powe) % m;
        hashS[indx++] = hashValue;
        powe = (powe * p) % m;
    }
    for(int i = 1; i < n; ++i){
        dummy += dummy[i % originalLength]; 
        dummyHashS.push_back(dummyHashS.back() + (dummy[i  % originalLength] - 'a' + 1 ) *  pV[i] % m);
        for(auto lo : dummyHashS) cout << lo << ' ';
        for(auto lo : hashS) cout << lo << ' ';
        cout << '\n';
        int x =1e9 ; 
        for(int j = 0; j <= i; ++j) if(hashS[j] != dummyHashS[j]) { x = j; break; }

        if(x != 1e9)    if(dummy[x] > s[x]) {
            dummy = s.substr(0, i+1);
            dummyHashS.clear();
            for(int j = 0; j<=i; ++j) dummyHashS.push_back(hashS[j]); 
            originalLength = i+1;
        }
    }
    for(int i = 0; i < k; ++i) cout << dummy[i%originalLength];
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();
}

