#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int pos = 1e8;
        string s;
        cin >> s;
        int n = s.size();
        char c = 'b';
        bool cont = false;
        int l = 0, r = 0;
        for(int i = 0; i < n; ++i) {
            if(s[i] == 'a') pos = i;
        }
        if(pos == 1e8) {cout << "No\n"; continue;}
        l = pos-1, r = pos+1;
        if(l < 0) l++;
        for(int i = 0; i < n-1; ++i){
            if(s[l] == c){
                if(l > 0) l--; c++;
            } 
            else if(s[r] == c) {
                if( r < n-1) r++; c++;
            }
            else {cont = true; cout << "No\n"; break;}
        }
        if(cont) continue;
        else cout << "Yes\n";
    }
}

