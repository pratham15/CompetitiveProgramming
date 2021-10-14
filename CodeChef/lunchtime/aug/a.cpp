#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n), sfmx(n);
        for(auto &x : a) cin >> x;
        sfmx[n-1] = a[n-1];
        for(int i = n-2; i >= 0; --i) 
            sfmx[i] = max(sfmx[i+1], a[i]);
        int ans = 1;
        int l = a[0];
        for(int i = n-1; i >= 1; --i) {
            if(sfmx[i] > a[i-1]) {
                ans = -1;
                break;
            }
            else if(sfmx[i] < sfmx[i-1]) ans++;
        }
        cout << ans << '\n';
    }
}

