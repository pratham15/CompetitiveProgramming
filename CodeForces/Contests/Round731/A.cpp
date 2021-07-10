#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int ax, ay, bx, by;
        int fx, fy;
        cin >> ax >> ay >> bx >> by >> fx >> fy;
        int ans = 0;
        if(fx == ax && fx == bx) {
            if(fy > min(ay, by) && fy < max(ay, by))
            ans += 2;
        }
        else if(fy == ay && fy == by) {
            if(fx > min(ax, bx) && fx < max(ax, bx)) ans+= 2;
        }
        ans += abs(ax-bx) + abs(ay-by);
        cout << ans << '\n';
    }
}

