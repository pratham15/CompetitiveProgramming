#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string a, b;
    cin >> a >> b;
    if(a==b) {
        cout << "Yes\n";
        return 0;
    }
    for(int i = 0; i < a.length() - 1; ++i) {
        string k = a;
        swap(k[i], k[i+1]);
        if(k == b) {
            cout << "Yes\n";
            return 0;
        }
    }
    cout << "No\n";
}

