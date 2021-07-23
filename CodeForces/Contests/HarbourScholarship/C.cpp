#include<bits/stdc++.h>
using namespace std;

int solve(string s) {
    int one = 0, two = 0;
    int gl1 = 5, gl2 = 5;
    for(int i = 0; i < 10; ++i) {
        if(i%2==0) gl2--;
        else gl1--;
        if(i%2 == 1 && s[i] == '1') one++;
        else if(i%2 == 0 && s[i]=='1') two++;
        /*
        cout << one << ' ' << two << '\n';
        cout << "games left = " << gl1 << ' ' << gl2 << '\n';
        cout << "one - two and vv = " << one - two << ' ' << two - one << '\n';
        */
        if(one - two > gl2) return i+1;
        else if(two - one > gl1) return i+1;
    }
    return 10;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;

    while(T--) {
        string s; cin >> s;
        int q = 0;
        for(auto x : s) if(x=='?') q++;
        if(q==0) {cout << solve(s) << '\n'; continue; }
        q += 1;
        int ans = 10;
        int j = q-1;
        int asd = j;
        while(q--){
            string k = string(asd , '0') + string(j - asd,  '1');
            asd--;
            do {
                string cp = s; int i = 0;
                for(int j = 0; j < 10; ++j) {
                    if(s[j] == '?') cp[j] = k[i++];
                }
                //cout << solve(cp) << ' ';
                ans = min(ans, solve(cp));
            } 
            while(next_permutation(k.begin(), k.end()));
        }
        cout << ans << '\n';
    }
}

