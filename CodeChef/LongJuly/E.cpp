#include<bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;
int64_t exp (int64_t a, int64_t b){
    int64_t res = 1;
    while(b) {
        if(b&1) res = res * a % mod;
        a = a*a % mod;
        b >>= 1;
    }
    return res;
}

vector<int64_t> pref;
vector<int64_t> pals;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    pref.push_back(0);
    pals.push_back(0);
    string s = "0";
    for(int i = 1; i <= 1e5; ++i){
        bool nine = true;
        for(int j = 0; j < s.size(); ++j)  if(s[j] != '9') nine = false;
        if(nine){
            string k = string(s.size(), '0');
            s = '1';
            s += k;
            s += '1';
            int64_t x = stol(s);
            pref.push_back(pref.back() + x);
            pals.push_back(x);
            continue;
        }
        int k = s.size();
        int mid = k/2;
        bool carry = false;
        if(s[mid] == '9') {
            carry = true;
            s[mid] = '0';
        }
        else s[mid]++;
        int l = mid-1, r = mid+1;
        while(l>=0 &&carry == true) {
            if(carry && s[l] == '9') {
                s[l] = '0';
            }
            else if(carry) {s[l]++; carry = false;} 
            s[r] = s[l];
            l--,r++;
        }
        int64_t x = stol(s);
        pref.push_back(pref.back() + x);
        pals.push_back(x);
    }
    int n;
    cin >> n;
    while(n--){
        int l, r;
        cin >> l >> r;
        cout << exp(pals[l], pref[r] - pref[l]) << '\n';
    }
}
