#include<bits/stdc++.h>
using namespace std;

//We have to create a string of length N, upper bound is 1e5;
//It has to be lexicographically smallest, ex aae, aee, EEO, oe(not valid)
const int N = 1e5 + 10;
int64_t dp[5][N];
const int mod = 1e9 + 7;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    for(auto &x : dp) 
        x[1] = 1;
    /*
    
    //AAAAAAAAAAAAAA
    //EEEEEEEEEEEEEE
    //IIIIIIIIIIIIII
    //OOOOOOOOOOOOOO
    //UUUUUUUUUUUUUU


    AE
    EE


    //dp[0]('A') = 1 for all N
    //dp[1]('E') = For N = 1, answer is 1
    //             FOr N = 2, possible strings are, AE, EE
    //dp[2]('I') = For N = 2, AI, EI, II            
    //            
    //
    */
    for(auto &x : dp[0]) x = 1;
    for(int j = 1; j < 5; ++j)
        for(int i = 2; i <= n; ++i){ 
            dp[j][i] = dp[j][i-1];
            for(int k = j-1; k >=0; --k)
                dp[j][i] += dp[k][i-1];
        }

    cout << [&](){
        int64_t ans = 0;
        for(auto &x : dp) 
            ans += x[n];
        return ans;
    }();

}
/*
AA 
AB
AC
AD
AE
BB
BC
BD
BE
CC
CD
CE
DD
DE
EE
*/


//N = 2, 

//C(N + 5 - 1, 5 - 1);


