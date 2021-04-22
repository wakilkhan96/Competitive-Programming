#include <bits/stdc++.h>
using namespace std;
#define MAXN 2000000  

bitset<MAXN+1> bs;
vector<int> prime;
int psize;

void sieve(int bound)
{
    bs.set();
    bs[0] = 0;
    bs[1] = 0;
    prime.push_back(2);
    psize++;

    for(int x=4; x<=bound; x+=2) bs[x] = 0;
    for(int x=3; x<=bound; x+=2)
    {
        if(bs[x] && (long long)x*x<=bound)
        {
            for(int j=x*x; j<=bound; j+=x) bs[j] = 0;
        }
        if(bs[x]) prime.push_back(x), psize++;
    }
}

struct st
{
    int totalFactors, sum;
};

st number_and_sum_of_factors(long long n)
{
    long long number = n;
    long long sum = 1LL;
    long long totalFactors = 1;

    for(int x=0; x<psize && prime[x]*prime[x]<=n; x++)
    {
        if(n%prime[x]==0)
        {
            int power = 1;
            long long p = prime[x]; 
            while(n%prime[x]==0)
            {
                n /= prime[x];
                p *= prime[x];
                power++;
            }
            totalFactors *= power;
            sum *= (p-1)/(prime[x]-1);
        }

        //if(sum>2*n) break;//sum-n>n =>sum>2*n=>sum/2>n
    }
    if(n>1)
    {
        totalFactors *= 2;
        sum *= (n+1);
    }

    st ob;
    ob.totalFactors = totalFactors;
    ob.sum = sum;

    return ob;
}


int divisors[1000001], divSum[1000001];
void precal()
{
    for(int x=1; x<1000001; x++)
    {
        st ob = number_and_sum_of_factors(x);
        divisors[x] = ob.totalFactors;
        divSum[x] = ob.sum;
    }
}



int main()
{
    //freopen("myfile.txt", "w", stdout);
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);

    sieve(sqrt(MAXN));
    precal();


    //for (int i=0; i<=20; i++) cout<<i<<"->"<<divisors[i]<<"->"<<divSum[i]<<endl;

    //cout<<find_lower_bound(12)<<endl;

    int test, l, r, k;
    scanf("%lld",&test);
    while(test--)
    {
        long long g = 0, h = 0; //g sum div
        scanf("%d %d %d", &l, &r, &k);
        for(int x=l; x<=r; x++)
        {
            if(x%k==0)
            {
                g += divisors[x];
                h += divSum[x];
            }
        }

        printf("%lld %lld\n", g , h);
        
    }
    
    
    
    //printf("\n");

    return 0;
    
}




/*
Sample Input
2
5 12 3
1 100 3
Sample Output
13 53
217 3323

strategy:
calculate divisors and their sum together and store them

*/