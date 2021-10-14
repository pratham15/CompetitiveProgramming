#include<bits/stdc++.h>
using namespace std;
mt19937_64 rng(chrono::high_resolution_clock::now().time_since_epoch().count());
vector<int> ans;

int ask(int x, int y) {
    cout << "? " << x << " " << y << endl;
    char c;
    cin >> c;
    if(c == '<') return -1;
    if(c=='=') return 0;
    if(c=='>') return 1;
    return 2;
}

void solve(vector <int> &nuts, vector <int> &bolts){


    if(nuts.size() == 1 && bolts.size() == 1) {
        ans[nuts[0] - 1] = bolts[0];
        return;
    }

    vector<int> sN, sB, gN, gB;
    int x = nuts[rng() % nuts.size()];
    for(auto b: bolts) {
        int y = ask(x, b);
        if(y == 0) ans[x-1] = b;
        else if(y==-1) gB.push_back(b);
        else sB.push_back(b);
    }

    for(auto n: nuts) {
        if(n == x) continue;
        int y = ask(n, ans[x-1]);
        if(y==-1) sN.push_back(n);
        else gN.push_back(n);
    }
    if(sN.size() > 0) 
        solve(sN, sB);
    if(gN.size() > 0)
        solve(gN, gB);
}

int main(){
    int n; cin >> n;
    ans = vector<int> (n);
    vector<int> nuts(n), bolts(n);
    iota(nuts.begin(), nuts.end(), 1);
    iota(bolts.begin(), bolts.end(), 1);
    solve(nuts, bolts);
    
    cout << "! ";
    for(auto &x : ans) cout << x << ' ';
    
}

