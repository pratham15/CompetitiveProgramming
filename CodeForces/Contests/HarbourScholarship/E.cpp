#include<bits/stdc++.h>
using namespace std;
void rotate(vector<int> &arr, int n)
{
    int x = arr[n - 1], i;
    for (i = n - 1; i > 0; i--)
    arr[i] = arr[i - 1];
    arr[0] = x;
}
int solve(vector<int> a, vector<int> &b, int n) {
    vector<int> freq(n+1);
    for(int i =0; i < n; ++i)  freq[a[i]] = i;
    //for(auto &x : b) cout << x << ' ';
    //cout << '\n';
    int m = 0;
    for(int i = 0; i < n; ++i) {
        if(a[i] != b[i]) {
            m++;
            int x = freq[b[i]], y = a[i];
            swap(a[i], a[freq[b[i]]]);
            freq[y] = x, freq[a[i]] = i;
        }
    }
    return m;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while(T--) {
        int n, swaps;
        cin >> n >> swaps;
        vector<int> a(n), b(n), ans;
        for(auto &x : a) cin >> x;
        for(int i = 0 ; i < n; ++i) b[i] = i+1;
        for(int i = 0; i < n; ++i){
            int s = solve(a, b, n);
            if(s <= swaps) ans.push_back(i);
            rotate(b, n);
        }
        cout << ans.size() << '\n';
        for(auto x : ans) cout << x << ' ';
        cout << "\n";
    }
}


// 1 2 3 4 5 6 7
// 1 4 3 6 5 7 2
// 1 3 4 5 2
