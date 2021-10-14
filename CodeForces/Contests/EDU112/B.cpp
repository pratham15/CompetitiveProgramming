#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while(T--) {
        int room1, room2, x1, x2, y1, y2;
        cin >> room1 >> room2 >> x1 >> y1 >> x2 >> y2;
        int x3, y3; cin >> x3 >> y3;
        int widthLeft, heightLeft;
        widthLeft = x2 - x1; widthLeft = room1 - widthLeft;
        heightLeft = y2 - y1; heightLeft = room2 - heightLeft;
//        cout << widthLeft << ' ' << heightLeft << '\n';
        if(widthLeft < x3 && heightLeft < y3) {
            cout << -1 << '\n';
            continue;
        }
        int mvX = 1e9, mvY = 1e9;
        if(heightLeft >=  y3){
            int tp = room2 - y2;
            int bt = y1;
            if(tp >= y3 || bt >= y3) {
                cout << 0 << '\n';
                continue;
            }
            else mvY = min(y3 - tp, y3 - bt);
        }
        if(widthLeft >= x3) {
            int l = x1;
            int r = room1 - x2;
            if(l >= x3 || r >= x3) {
                cout << 0 << '\n';
                continue;
            }
            else mvX = min(x3 - l, x3 - r);
        }
        
        if(widthLeft < x3) {
            mvX = mvY;
        }
        if(heightLeft < y3) mvY = mvX;
        
        cout << min(mvX, mvY) << '\n';
    }
}
 

