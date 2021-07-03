#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int x = 19260817;
    while(x > 0){
        x -= 264;
        if(x % 233 == 0) { cout << "Yes\n";
            cout << x << '\n';
            break;
        }
    }
}

