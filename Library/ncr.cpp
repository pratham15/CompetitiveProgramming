const int N = 
const int M = 
int64_t fact[N];

int64_t pw(int x, int y) {
    int res = 1;
    x %= M;
    while(y>0) {
        if(y&1) res = (res*x) % M;
        y >>= 1;
        x = (x*x) % M;
    }
    return res;
}

int64_t inv(int n) {
    return pw(n, M-2);
}

void init() {
    fact[1] = 1;
    for(int i = 2; i < N; ++i) 
        fact[i] = (fact[i-1] * i) % M;
}

int64_t ncr(int n, int r) {
    if( n < r) return 0;
    if( r == 0) return 1;
    return(fact[n] * inv(r) % M * inv(fact[n - r]) % M) % M;
}

