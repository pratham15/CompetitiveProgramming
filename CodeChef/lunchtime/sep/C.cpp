#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    vector<int> a(N);
    
    int t;
    cin >> t;
    while(t--) {
        int64_t n;
        cin >> n;
        int64_t y = n-1;

        if(n==2LL or (ceil(log2(y)) == floor(log2(y)))) {
            cout << "Bob\n";
            continue;
        }
        if(ceil(log2(n)) == floor(log2(n)) || n== 1LL || n == 3LL) {
            cout << "Alice\n";
            continue;
        }
    }
}

/*
1 = W 
2 = L
3 = W
4 = W
5 = L
6 = L
7 = W
8 = W
9 = L
10 = W
11 = L
12 = W
13 = L
14 = L
15 = W
16 = W
17 = L
18 = W
19 = L
20 = W
*/
