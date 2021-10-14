#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> indexed_set;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while(T--) {
        int n; cin >> n;
        if(n == 1) cout << "a\n";
        else if ( n== 2) cout << "ab\n";
        else if(n==3) cout << "abc\n";
        else cout << string(n/2, 'a') + (n&1 ? "bc" : "b") + string(n/2 - 1, 'a') << '\n';
    }
}

