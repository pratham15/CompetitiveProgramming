#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n, s;
        cin >> n >> s;
        int mid = (n+1)/2;
        if(n%2==0) mid++;
        cout << s / mid << '\n';
    }
}

