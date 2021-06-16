#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--){
        ll n,sum=0;
        cin>>n;
        n+=2;
        vector<ll> v1;
        multiset<ll> s1;
        for (ll i=0;i<n;i++){
            ll x;
            cin>>x;
            v1.push_back(x);
            s1.insert(x);
            sum+=x;
        }
        sort(v1.begin(),v1.end());
        s1.erase(prev(s1.end()));
        if (v1[n-2]==(sum-v1[n-1]-v1[n-2])){
                for (ll i=0;i<(n-2);i++) cout<<v1[i]<<" ";
                cout<<"\n";
        }
        else if (s1.count(sum-2*(v1[n-1]))>0){
            auto it=s1.find(sum-2*(v1[n-1]));
            if (it!=s1.end()){
                s1.erase(it);
                for (auto it2=s1.begin();it2!=s1.end();it2++) cout<<(*it2)<<" ";
                cout<<"\n";
            }
            else cout<<-1<<"\n";
        }
        else cout<<-1<<"\n";
    }
    return 0;
}
