#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n; cin >> n;
        string bt, tp;
        cin >> tp >> bt;
        int cnt = 0;
        for(int i = 0; i < n; ++i) {
            if(bt[i] != '1') continue;
            if(bt[i] == '1' && tp[i] == '0'){
                cnt++;
                tp[i] = 2;
            }
            else if(bt[i] == '1' && tp[i] == '1' && i < n-1) {
                if(i>0) {
                    if(tp[i-1] == '1') {cnt++; continue; }
                }
                if(bt[i+1] == '1' && tp[i+1] == '1'){ 
                    tp[i] = 2;
                    tp[i+1] = 2;
                    cnt += 2; 
                    i++; 
                    continue;
                }
                if(tp[i+1] == '1') {
                    tp[i+1] = 2;
                    cnt++;
                }
            }
            else if( bt[i] == '1' && tp[i] == '1' && i == n-1) {
                if(tp[i-1] == '1') {cnt++;}
            }
        }
        cout << cnt << '\n';
    }
}

