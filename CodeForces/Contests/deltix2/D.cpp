#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k; 
    cin >> n >> k;
    vector<int> sm(n);
    for(int i = 2; i <= n; ++i) {
        int x, y;
        cout << "and " << 1 << ' ' << i << endl;
        cin >> x;
        cout << "or " << 1 << ' ' << i << endl;
        cin >> y;
        sm[i-1] = x + y;
    }
    int x, y;
    cout << "and " << 2 << ' ' << 3 << endl;
    cin >> x;
    cout << "or " << 2 << ' ' << 3 << endl;
    cin >> y;
    sm[0] = sm[1] + sm[2] - x - y;
    sm[0] /= 2;
    for(int i = 1; i < n; ++i) sm[i] -= sm[0];
    sort(sm.begin(), sm.end());
    cout << "finish " << sm[k-1] << '\n';
}

/*
1, 2, 3
1 + 2, 2 + 3, 1 + 3
3, 5, 4
3 + 5 - 4 = 4
4/2 = 1;
*/
