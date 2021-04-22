#include<bits/stdc++.h>
using namespace std;

bitset<10000010> bs;
vector<long long> primes;
vector<vector<int> > factors;
vector<int> end_index;

int n;

void sieve( long long upper_bound )
{
    bs.set();
    bs[0] = bs[1] = 0;

    for(long long i = 2; i <= upper_bound + 1; i++)
    {
        if(bs[i])
        {
            for(long long j = i * i; j <= upper_bound + 1; j += i) bs[j] = 0;

            primes.push_back( i );
        }
    }
}

vector<int> prime_factors( int n )
{
    vector<int> factors;
    int pf_index = 0;
    long pf = primes[pf_index];

    while(pf * pf <= n) {
        while(n % pf == 0) {
            n /= pf;
            factors.push_back(pf);
        }
        pf = primes[++pf_index];
    }
    if(n != 1)
        factors.push_back(n);

    return factors;
}

int main()
{
    sieve(50000);
    while( true )
    {
        scanf("%d", &n);
        if(n == 0) break;

        vector<int> factors = prime_factors( fabs(n) );

        printf(n < 0? "%d = -1 x %d" : "%d = %d", n, factors[0]);
        for(int i = 1; i < factors.size(); i++) printf(" x %d", factors[i]);
        printf("\n");
    }

}
