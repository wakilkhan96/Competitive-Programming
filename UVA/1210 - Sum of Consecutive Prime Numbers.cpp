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
    int n;
    while(true)
    {
        scanf("%lld",&n);
        if(n==0) break;
        int cou = 0, sum = 0;
        
        for (int x=0; prime[x]<=n; x++)
        {
            sum = 0;
            for(int y=x; sum<n; y++) sum += prime[y];
            if(sum == n) cou++;
        }
        printf("%lld\n",cou);
    }

    return 0;
}




/*

Sample Input
2
3
17
41
20
666
12
53
0
Sample Output
1
1
2
3
0
0
1
2
*/