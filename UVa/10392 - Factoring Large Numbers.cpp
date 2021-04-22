#include <bits/stdc++.h>
using namespace std;
#define maxN 100000; 

typedef long long ll;

bitset<1000100> bs;
vector<long long> prime;

void sieve(int bound)
{
    bs.set();
    bs[0] = 0;
    bs[1] = 0;
    for(int x=2; x<=bound; x++)
    {
        if(bs[x] && (long long)x*x<=bound)
        {
            for(int j=x*x; j<=bound; j+=x) bs[j] = 0;
        }
        if(bs[x]) prime.push_back(x);
    }
}

void generate_factors(long long n)
{
    for(int x=0; x<prime.size(); x++)
    {
        //cout<<prime[x]<<endl;
        if(n%prime[x]==0)
        {
            while(n%prime[x]==0)
            {
                printf("    %lld\n", prime[x]);
                n /= prime[x];
            }
        }
    }
    if (n!=1) printf("    %lld\n", n);
    printf("\n");
}



int main()
{
    sieve(1000000);
    long long int n;
    while (scanf("%lld", &n) && n!=-1) 
    {
        generate_factors(n);
    }

    return 0;
    
}




/*

Sample Input
90
1234567891
18991325453139
12745267386521023
-1
Sample Output
2
3
3
5
1234567891
3
3
13
179
271
1381
2423
30971
411522630413


*/


