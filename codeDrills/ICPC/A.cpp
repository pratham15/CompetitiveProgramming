#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while(t--) {
        int n, x; 
        cin >> n >> x;
        if(x >= n) {cout << "1\n"; continue; }
        if(n%2==1 && x==0) { cout << "-1\n"; continue; }
        int ln = log2(n);
        if(ln %2 == 1 && pow(2, ln) == n) {
            cout << "1\n";
            continue;
        }
        if(ln%2 == 0 && pow(2, ln) == n) {
            cout << "2\n";
            continue;
        }
        int cp = ln;
        int rem = n - pow(2, ln);
        if(x >= rem) {
            if(l%2==0) cout << "3\n";
            else cout << "2\n";
            continue;
        }
    }
}

