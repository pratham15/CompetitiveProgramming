#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int N; string S;
    cin >> N >> S;
    cout << (S.find_first_of('1') % 2 == 1 ? "Takashi" : "Aoki") << '\n';
}

