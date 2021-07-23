#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s; cin >> s;
    int N = s.size();
    string k = "";
    for(int i = 0; i < N; ++i) {
        if(islower(s[i])) {
            for(int j = i; j < N; ++j) k += s[j];
            break;
        }
    }
    if(k.size() == 0 ) {cout << 0; return 0;}
    N = k.size();
    vector<int> l(N), u(N);
    for(int i = 0; i < N; ++i) {
        if(i!=0) l[i] = l[i-1], u[i] = u[i-1];
        l[i] += (islower(k[i]) > 0 ? 1 : 0), u[i] += isupper(k[i]);
    }
    int ans = 1e9;
    for(int i = 1; i < N; ++i) {
        ans = min(l[i] +  u[N-1] - u[i], ans);
    }

    ans = min({l[N-1], u[N-1], ans});
    cout << ans << '\n';

}

