#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while(t--) {
        int N, M;
        cin >> N >> M;
        vector<vector<int>> a(N, vector<int>(M, 0));
        a[0][0] = a[N-1][M-1] = a[0][M-1] = a[N-1][0]= 1;
        for(int i = 2; i < N; i += 2) 
            if(i < N-1) 
                if(a[i+1][0] != 1) a[i][0] = a[i][M-1] = 1;
            
        for(int j = 2; j < M; j += 2) 
            if( j < M-1) 
                if(a[0][j+1] != 1) a[0][j] = a[N-1][j] = 1;
            
        for(int i = 0; i < N; ++i) {
            for(int j = 0; j < M; ++j) cout << a[i][j];
            cout << '\n';
        }
    }
}

