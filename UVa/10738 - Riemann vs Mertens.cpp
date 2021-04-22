#include <bits/stdc++.h>
using namespace std;
#define MAXN 1000000  

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


int get_mu(int n)
{
    int primeFactors = 0;
    int cou = 0;
    bool square = false;
    
    for(int x=0; x<psize && prime[x]*prime[x]<=n && n>1; x++)
    {
        //printf("%d %d\n", n, prime[x]);
        if(n%prime[x]==0)
        {
            primeFactors++;
            cou = 0;
            while(n%prime[x]==0)
            {
                n /= prime[x];
                cou++;
                if(cou>1) 
                {
                    //printf("%d %d\n", cou, n);
                    square = true;
                    break;
                }
                //printf("%d %d\n", cou, n);
            }
        }
    }
    if(n>1) primeFactors++;

    if(square) return 0;
    if(primeFactors%2==0) return 1;
    else return -1;
}


int mu[MAXN+1], M[MAXN+1];
void precal()
{
    memset(mu, 0, sizeof(mu));
    memset(M, 0, sizeof(M));
    mu[1] = 1; M[1] = 1;

    for(int x=2; x<=MAXN; x++)
    {
        mu[x] = get_mu(x);
        M[x] = M[x-1] + mu[x];
    }
}



int main()
{
    //freopen("myfile.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    sieve(sqrt(MAXN));
    precal();

    //for(int x=0; x<21; x++) printf("%8d%8d%8d\n", x, mu[x], M[x]);
    //printf("%8d\n", get_mu(10));

    int n;
    while(scanf("%d", &n))
    {
        if(n==0) break;
        printf("%8d%8d%8d\n", n, mu[n], M[n]);
    }
    
    
    //printf("\n");

    return 0;
    
}




/*
Sample Input
20
1
144
73
0
Sample Output
20 0 -3
1 1 1
144 0 -1
73 -1 -4




N factors mu(N) M(N)
 1 - 1 1
 2 2 -1 0
 3 3 -1 -1
 4 22 0 -1
 5 5 -1 -2
 6 23 1 -1
 7 7 -1 -2
 8 222 0 -2
 9 33 0 -2
10 25 1 -1
11 11 -1 -2
12 223 0 -2
13 13 -1 -3
14 27 1 -2
15 35 1 -1
16 2222 0 -1
17 17 -1 -2
18 233 0 -2
19  19 -1 -3
20 225 0 -3

*/