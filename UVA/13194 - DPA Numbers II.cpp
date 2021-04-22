#include <bits/stdc++.h>
using namespace std;


bitset<1200100> bs;
vector<long long> prime;
int primeSize = 0;

void sieve(int bound)
{
    bs.set();
    bs[0] = 0;
    bs[1] = 0;
    prime.push_back(2);

    for(int x=4; x<=bound; x+=2) bs[x] = 0;
    for(int x=3; x<=bound; x+=2)
    {
        if(bs[x] && (long long)x*x<=bound)
        {
            for(int j=x*x; j<=bound; j+=x) bs[j] = 0;
        }
        if(bs[x]) prime.push_back((long long)x), primeSize++;
    }
}



long long sum_of_factors_BigNumber(long long n)
{
    long long number = n;
    long long sum = 1LL;

    for(int x=0; x<primeSize && prime[x]*prime[x]<=n; x++)
    {
        if(n%prime[x]==0)
        {
            long long p = prime[x]; 
            while(n%prime[x]==0)
            {
                n /= prime[x];
                p *= prime[x];
            }

            sum *= (p-1)/(prime[x]-1);
        }

        if(sum/2>n) break;//sum-n>n =>sum>2*n=>sum/2>n
    }
    if(n>1)
    {
        //sum *= (n*n-1)/(n-1);
        sum *= (n+1);// (n+1) equivalent to (n*n-1)/(n-1)
    }

    
    return sum;
}

int main()
{
    //freopen("myfile.txt", "w", stdout);
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);
    sieve(1200000);

    //cout<<sum_of_factors_BigNumber(18)<<endl;
    //cout<<sum_of_factors_BigNumber(504)<<endl;
    long long n;
    int test, tcase = 1;
    scanf("%d", &test);
    while(test--)
    {
        scanf("%lld", &n);
        long long s = sum_of_factors_BigNumber(n);
        if (s == 2*n) puts("perfect");
		else if (s < 2*n) puts("deficient");
		else puts("abundant");
    }
    //printf("\n");

    return 0;
    
}




/*

Sample Input
9
999900007063
934053120000
999900003719
349621272000
560431872000
999900001643
999900003863
539630239744
137438691328

Sample Output
deficient
abundant
deficient
abundant
abundant
deficient
deficient
abundant
perfect


strategy:

n efficient solution is to use below formula.
Let p1, p2, … pk be prime factors of n. Let a1, a2, .. ak be highest powers of p1, p2, .. pk respectively that divide n, i.e., we can write n as n = (p1a1)*(p2a2)* … (pkak).

Sum of divisors = (1 + p1 + p12 ... p1a1) * 
                  (1 + p2 + p22 ... p2a2) *
                  .............................................
                  (1 + pk + pk2 ... pkak) 

We can notice that individual terms of above 
formula are Geometric Progressions (GP). We
can rewrite the formula as.

Sum of divisors = (p1a1+1 - 1)/(p1 -1) * 
                  (p2a2+1 - 1)/(p2 -1) *
                  ..................................
                  (pkak+1 - 1)/(pk -1)

*/