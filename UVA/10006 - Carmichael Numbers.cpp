#include<bits/stdc++.h>
using namespace std;
#define Pi 2*acos(0.0)
#define ms(a,b) memset(a, b, sizeof(a))
#define pb(x) push_back(x)
#define pb_pair(x,y) push_back(make_pair(x,y))


bitset<1000010> bs;
bool is_prime[65020], is_carmichael[65020];


void sieve(long long bound)
{
    bs.set();
    bs[0] = 0;
    bs[1] = 0;

    for(long long x=2; x<=bound; x++)
    {
        if(bs[x])
        {
            is_prime[x] = true;
            for(long long y=x*x; y<=bound; y+=x) bs[y] = 0;
        }
    }
}


int mod_pow(long long base, int exp, int mod)
{
    long long result = 1;
    while(exp > 0)
    {
        if(exp % 2 == 1) result = (result * base) % mod;
        exp = exp >> 1;
        base = (base * base) % mod;
    }
    return result;
}


bool carmichael(long long n)
{
    if(is_prime[n]) return false;
    else
    {
        for(long long i=2; i<n; i++)
        {
            if( mod_pow(i, n, n) != i ) return false;
        }
    }

    return true;

}



int main()
{
    sieve(65010);
    //cout<<"done"<<endl;
    for(long long n=2; n<=65010; n++)
    {
        is_carmichael[n] = carmichael(n);
    }
    //cout<<"done"<<endl;

    long long n;
    while(true)
    {
        scanf("%lld", &n);
        if(n == 0) break;

        printf(is_carmichael[n]? "The number %lld is a Carmichael number.\n" : "%lld is normal.\n", n);
    }

    return 0;
}


/*

UVa 10006: Carmichael numbers

Process:
There is a lot of math in this one. The problem is asking us to identify
Carmichael numbers - non-primes that satisfy the equation a^n mod n = a
for n from 2 to n - 1. It should be apparent that for large n,
we will not be able to store a^n in any data type (outside of BigInteger, but this is too slow).
We have to use a fast modular exponentiation technique for speed and to stay within our 64 bit integer limit.
There is a good explanation of what this is here: http://goo.gl/Q82TQ5
Note that all primes will pass the Fermat test ( Fermat s little theorem).
Therefore we need to use the sieve of Eratosthenes to generate the primes up to 65000
and eliminate them as Carmichael numbers. You should pre-process the Carmichael numbers under 65000 - otherwise you will time out.

*/
