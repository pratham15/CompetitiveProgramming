#include<bits/stdc++.h>
using namespace std;
#define S second
#define F first
void solve()
{
	string s;
	cin >> s;
	int n = s.length();
 
	map<char, int> mp;
	for (int i = 0; i < n; i++) {
		mp[s[i]]++;
	}
 
	int ans = 0;
	for (auto x : mp) {
		if (x.S >= 2) {
            cout << x.first << '\n';
			ans++;
			// mp[x.F] = x.S % 2;
		}
	}
 
	// trace(ans);
 
	int cnt_rem = 0;
	for (auto x : mp) {
		if (x.S == 1) {
			cnt_rem++;
		}
	}
    cout << cnt_rem << ' ' << ans << '\n'; 
 
	cout << ans + cnt_rem / 2 << "\n";
 
 
 
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while(T--) {
        solve();
        string s;
        cin >> s;
        vector<int> freq(26);
        for(auto x : s) freq[x-'a']++;
        int sum = 0;
        for(auto x : freq) sum+= min(x, 2);
        cout << sum/2 << '\n';
    }
}

