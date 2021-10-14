#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        vector<int> a(3);
        int n;
        cin >> a[0] >> a[1] >> a[2] >> n;
        sort(a.begin(), a.end());
        int mini = max(0, a[2] - a[1] - a[0] - 1);
        int maxi = 0;
        if(a[0] > 0) maxi += a[0] - 1;
        if(a[1] > 0) maxi += a[1] - 1;
        if(a[2] > 0) maxi += a[2] - 1;
        if(n <= maxi && n >= mini) cout << "YES\n";
        else cout << "NO\n";
    }
}

