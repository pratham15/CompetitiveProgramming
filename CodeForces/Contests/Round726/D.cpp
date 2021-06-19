#include<bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int cnt = 0;
        if(n&1){ cout << "Bob\n"; continue; }
        while(n%2 == 0) n/=2, cnt++;
        if(cnt & 1 && n == 1) cout << "Bob\n"; 
        else cout << "Alice\n";
    }
}

