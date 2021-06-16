#include<bits/stdc++.h>
using namespace std;
#define int int64_t
using ll = long long;
int sLow = 0, sUp = 0;
int N,K;
multiset<int> low, up;
void ins(ll val){
	ll a = *low.rbegin();
	if(a < val){
		up.insert(val); sUp += val;
		if(up.size() > K/2){
			ll moving = *up.begin();
			low.insert(moving); sLow += moving;
			up.erase(up.find(moving)); sUp -= moving;
		}
	}
	else{
		low.insert(val); sLow += val;
		if(low.size() > (K + 1)/2){
			ll moving = *low.rbegin();
			up.insert(*low.rbegin()); sUp += moving;
			low.erase(low.find(*low.rbegin())); sLow -= moving;
		}
	}
}

void er(ll val){
	if(up.find(val) != up.end()) up.erase(up.find(val)), sUp -= val;
	else low.erase(low.find(val)), sLow -= val;
	if(low.empty()){
		ll moving = *up.begin();
		low.insert(*up.begin()); sLow += moving;
		up.erase(up.find(*up.begin())); sUp -= moving;
	}
}

ll med(){ return (K%2 == 0) ? 0 : (*low.rbegin()); }

signed main() {
//    freopen("in.txt", "r", stdin);
  //  freopen("fastTest.txt", "w", stdout);
    cin >> N >> K;
    vector<int> a(N);
    for(auto &x : a) cin >> x;
    low.insert(a[0]); sLow += a[0];
    for(int i = 1; i < K; ++i) ins(a[i]);
    cout << sUp - sLow + med() << ' ';
    for(int i = K; i < N; ++i){
        if(K==1) { ins(a[i]); er(a[i-K]); }
        else { er(a[i-K]); ins(a[i]); }
        cout << sUp - sLow + med() << ' ';
    }
}
