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
    int n, tc, x;
    cin>>test;
    while(test--)
    {
        scanf("%d", &n);
        //int p = 1; //as for p==1 ; n-p*x will be maximized
        //a given condition -> (p+1)*x > n
        //as, p=1, so -> 2*x > n
        // also 2*x > n -> x > (n/2)
        for(x=n/2; x<=n; x++) 
        {
            if(isPrimeNumber(x)) 
            {
                if(x*2>n) break;
            }
        }
        printf("%d\n", x);
   }
    return 0;
}




/*

Sample Input
5
4399
614
8201
101
7048
Sample Output
2203
311
4111
53
3527
*/