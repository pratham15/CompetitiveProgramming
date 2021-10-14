#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void swp(vector<char> &s, int n, int cur){
        if(cur >= n/2) return;
        swap(s[cur], s[n-cur-1]);
        swp(s, n, cur+1);
    }
    void reverseString(vector<char>& s) {
        int n = s.size();
        swp(s, n, 0);
    }
};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    vector<char> s = {'a','b','c','d','e'};
    Solution sol;
    sol.reverseString(s);
    for(auto x : s) cout << x;
}

