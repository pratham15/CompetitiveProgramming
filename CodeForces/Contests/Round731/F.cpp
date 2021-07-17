#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll sum = 0;
    vector<pair<ll,ll>> v1;
    string s="0";
    for (ll i=1;i<=100;i++){
        ll mid=(s.size())/2,flag=0;
        if (s[mid]=='9'){
            flag=1;
            if (s.size()>1) s[mid]='0';
        }
        else{
            s[mid]++;
            ll x=stol(s);
            sum+=x;
        }
        if (flag){
            ll l=0,r=0;
            if (mid!=0){
                l+=mid-1;
                r+=mid+1;
            }
            while(l>=0){
                if (s[l]=='9'){
                    s[l]='0';
                    s[r]=s[l];
                    if (l==0){
                        s='1'+s;
                        s+='1';
                        ll x=stol(s);
                        sum+=x;
                    }
                    l--;
                    r++;
                }
                else{
                    s[l]++;
                    s[r]=s[l];
                    ll x=stol(s);
                    sum+=x;
                    break;
                }
            }
        }
        cout << s << '\n';
    }
}

