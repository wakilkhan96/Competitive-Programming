#include<bits/stdc++.h>
using namespace std;

bitset<1000010>bs;
vector<long long>prime;

void sieve(long long bound)
{
    bs.set();
    bs[0] = 0;
    bs[1] = 0;

    for(long long x=2; x<=bound; x++)
    {
        if(bs[x])
        {
            for(long long y=x*x; y<=bound; y+=x) bs[y] = 0;
            prime.push_back( x );
        }
    }
}

long long countFactor( long long n )
{
    int count = 0, index = 0;
    long long pf = prime[0];
    while(pf*pf<=n)
    {
        if(n%pf==0)
        {
            count++;
            while(n%pf==0)
            {
                n/=pf;
            }
        }
        pf = prime[++index];
    }
    if(n!=1)
    {
        int s = prime.size();
        for(int x=0; x<s; x++) if(prime[x]==n)count++;
    }

    return count;
}

int main()
{
    sieve(1000010);

    long long n;
    while(scanf("%lld", &n) && n)
    {
        printf("%lld : %lld\n", n, countFactor( n ) );
    }

    return 0;
}
