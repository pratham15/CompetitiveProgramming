#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n; cin >> n;
        string a, b;
        cin >> a >> b;
        int ans = 0;
        for(int i = 0; i < n; ){

            if(a[i] != b[i] && (a[i] == '0' || b[i] == '0')){
                //cout << "Here " << i << '\n';
                ans += 2;
                i++;
            }
            //0
            //0
            else if(a[i] == b[i] && a[i] == '0') {
                if(i < n-1) {
                    //01
                    //01
                    if(b[i+1] == a[i+1] && a[i+1] == '1' ) ans += 2, i+=2;
                    else ans += 1, i++; 
                }
                else {
                    ans++; i++;
                }
            }
            //1
            //1
            else if(a[i] == b[i] && a[i] == '1') {
                int j;
                for(j = i + 1; j < n; ++j) {
                    //cout << "loop " << j << '\n';
                    if(a[j] == '0' || b[j] == '0') {
                        ans += 2;
                        break;
                    }
                }
                i = j + 1;
            }
            //cout << ans << ' ' << i << '\n';
        }
        cout << ans << '\n';
    }
}

