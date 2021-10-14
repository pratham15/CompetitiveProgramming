#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while(T--) {
        // no/10 -> n/8 -> n/6
        int n; cin >> n;
        int64_t ans = 0;
        if(n%6 == 0) 
            ans = (n/6) * 15;
        else if(n % 8 == 0)
            ans = (n/8) * 20;
        else if(n%10 == 0)
            ans = (n/10) * 25;
        else {
            int a = n%10, b = n%8, c = n%6;

    }
}

