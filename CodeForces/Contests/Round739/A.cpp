#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int T;
    vector<int> s;
    int i = 0, k = 0;
    while(i < 1000){
        k++;
        if(k%10 == 3 || k%3 == 0) continue;
        i++;
        s.push_back(k);
    }
    cin >> T;
    while(T--) {
        int n;
        cin >> n;
        cout << s[n-1] << '\n'; 
    }
}

