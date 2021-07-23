const int S = asd;
vector<bool> is_prime(S+1, true);
is_prime[0] = is_prime[1] = false;
void sieve(){
    for (int i = 2; i <= S; i++) 
        if(is_prime[i])
            for (int j = i * i; j <= S; j += i)
                is_prime[j] = false;
}

//vector<int> pref_sums(S+1, 0);
//void pref(){
//    pref_sums[0] = pref_sums[1] = 0;
//    for(int i = 2; i <= S; ++i)
//        pref_sums[i] += pref_sums[i-1] + is_prime[i];
//}

