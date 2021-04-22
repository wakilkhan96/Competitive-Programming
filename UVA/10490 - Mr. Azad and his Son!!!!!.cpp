#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(0),cin.tie(0)

#define maxN 46500

bitset<100100>bs;
vector<int>prime;
int prime_size;


void sieve(int bound)
{
    bs.set();
    bs[0] = 0;
    bs[1] = 0;

    for(int x=2; x<=bound; x++)
    {
        if(bs[x] && (long long)x*x <= bound)
        {
            for(int y=x*x; y<=bound; y+=x) bs[y] = 0;
        }
        if(bs[x]) prime.push_back( x );
    }

    prime_size = prime.size();
}

bool isPrimeNumber(int n)
{
    if(n<=maxN) return bs[n];
    else
    {
        for(int x=0, nSqrt=(int)sqrt(n); x<prime_size && prime[x]<=nSqrt; x++)
        {
            if(n%prime[x]==0) 
            {
                //cout<<n<<" - divides by prime " <<prime[x]<<endl;
                return false;
            }
        }
        return true;
    }
}



int main() 
{
    sieve(46500);
    long long n, a, b;
    while(scanf("%lld", &n) == 1 && n) 
    {
        a = isPrimeNumber(n);
        b = isPrimeNumber((1LL<<n)-1);
        if(a && b)
            printf("Perfect: %lld!\n", (1LL<<(n-1))*((1LL<<n)-1));
        else if(a && !b)
            puts("Given number is prime. But, NO perfect number is available.");
        else
            puts("Given number is NOT prime! NO perfect number is available.");
    }
    return 0;
}


/*

Sample Input
2
3
6
0
Sample Output
Perfect: 6!
Perfect: 28!
Given number is NOT prime! NO perfect number is available.
*/