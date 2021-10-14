#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    const int N = 1e6;
    vector<int> a(N);
    set<int> s;
    s.insert(1);
    s.insert(3);
    a[1] = 1;
    a[2] = 1;
    a[3] = 2;
    for(int i = 4; i < N-100; ++i) {
        if(i%2 == 1) s.insert(i);
        else if(s.count(i/2) == 0) s.insert(i);
        a[i] = s.size();
        if(i == 20) for(auto x: s) cout << x << " ";
    }
    cout << "\n";
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        cout << a[n] << '\n';
    }
    
}

