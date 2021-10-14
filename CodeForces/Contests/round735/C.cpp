#include<bits/stdc++.h>
using namespace std;
mt19937_64 rng(chrono::high_resolution_clock::now().time_since_epoch().count());
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while(T--) {
        int n, m;
        cin >> n >> m;
        m++;
        vector<int> freq(32,0), freq2(32,0);
        for(int i = 0; i < 32; ++i) {
            if(1 & (n >> i)) freq[i]++;
            if(1 & (m >> i)) freq2[i]++;
        }
        vector<int> ans(32,0);
        bool beat = false;
        for(int i = 31; i >= 0; --i) {
            if(freq[i] == freq2[i]);
            else if(freq[i] == 0 && freq2[i] == 1) ans[i] = 1;
            else {
                beat = true;
                break;
            }
        }
        int total = 0;
        for(int i = 0;  i <= 31; ++i) 
            if(ans[i] == 1) total |= 1 << i;
        cout << total << '\n';
    }
}

