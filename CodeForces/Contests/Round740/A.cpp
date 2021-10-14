#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while(T--) {
        int n; cin >> n;
        vector<int> a(n);
        for(auto &x : a) cin >> x;
        int i = 0;
        while(1) {
            if(is_sorted(a.begin(), a.end())) {
                    cout << i << '\n';
                    break;
            }
            int j;
            if(i%2 == 0) j = 0;
            else j = 1;
            for(; j < n-1; j += 2) 
                if(a[j] > a[j+1]) swap(a[j], a[j+1]);
            i++;
        }
    }
}

