#include <bits/stdc++.h>
using namespace std;
#define maxN 100000; 

typedef long long ll;

bitset<10000100> bs;
vector<long long> prime;

void sieve(int bound)
{
    bs.set();
    bs[0] = 0;
    bs[1] = 0;
    prime.push_back(2);

    int sqrt_bound = sqrt(bound);
    for(int x=2; x<=bound; x+=2) bs[x] = 0;
    for(int x=3; x<=bound; x+=2)
    {
        if(bs[x] && (long long)x*x<=bound)
        {
            for(int j=x*x; j<=bound; j+=x) bs[j] = 0;
        }
        if(bs[x]) prime.push_back(x);
    }
}

bool isPrimeNumber(long long n)
{
    long long last = prime[prime.size()-1];
    for(long long int x=last; x*x<=n; x+=2)
    {
        if(n%x==0) return false;
    }
    return true;
}

void _factors(long long n)
{
    vector<long long> factors;
    for(int x=0; x<prime.size() && prime[x]<=n; x++)
    {
        if(n%prime[x]==0)
        {
            factors.push_back(prime[x]);
            while(n%prime[x]==0)
            {
                n /= prime[x];
            }
        }
    }
    if (n!=1)
    {
        if(n>prime[prime.size()-1])
        {
            if(isPrimeNumber(n) ) factors.push_back(n);
        }
         
    }

    //cout<<factors.size()<<endl;
    if(factors.size()>1)printf("%lld\n", factors[factors.size()-1]);
    else printf("-1\n");
}



int main()
{
    //freopen("myfile.txt", "w", stdout);
    sieve(10000000);
    //cout<<prime.size()<<endl;
    long long int n;
    while (scanf("%lld", &n) && n!=0) 
    {
        if(n<0) n = -n;
        _factors(n);
    }

    return 0;
    
}




/*

Sample Input
2
6
100
0
Sample Output
-1
3
5

*/


