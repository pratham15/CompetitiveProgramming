#include<bits/stdc++.h>
using namespace std;

void solve(){
 
int n;
cin>>n;
vector<int>v;
/*for(int i=0;i<n;i++){
    int x;
    cin>>x;
    v.push_back(x);
}*/
int v1 = 6;
int v2 = 8;
int v3 = 10;
int t1 = 15;
int t2 = 20;
int t3 = 25;
int ret = INT_MAX;
int b = n/6;
int c = n%6;
if(n<=6){
    cout << "15" << endl;
    return;
}
 
if(c==0){
      cout << b*15 << endl;
    return;
}
 
if(c<=2){
    cout << (b-1)*15 + 20 << endl;
    return;
}
 
if(c<=4){
      cout << (b-1)*15 + 25 << endl;
    return;
}
 
 
cout << (b+1)*15 << endl;
 
 
 
 
    
 
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
}

