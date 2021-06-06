#include<bits/stdc++.h>
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());


string nextWord(string s){
	int i = s.length() - 1;
	while (s[i] == 'z' && i >= 0)
		i--;
	if (i == -1)
		s = string(s.length()+1, 'a');
	else{
        s[i]++;
        int k = i+1; 
        while(k < s.length()){
            s[k] = 'a';
            k++;
        }
    }
	return s;
}


void solve(){
    int n;
    string s;
    cin >> n >> s;
    string k = "a";
    while(1){
        size_t found = s.find(k);
        if(found == string::npos){
            cout << k <<"\n";
            return;
        }
        else k = nextWord(k);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    t = 1;
    cin >> t;
    while(t--) solve();
}

