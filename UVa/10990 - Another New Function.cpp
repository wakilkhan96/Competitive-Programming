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


int phiValue[MAXN+1], depthPhi[MAXN+1], sodp[MAXN+1];
//euler totient function
int phi(int n)
{
    int ans = n;
    for(int i=0; i<prime.size() && prime[i]<=sqrt(n); i++)
    {
        if(n%prime[i]==0)
        {
            while(n%prime[i]==0)
            {
                n/=prime[i];
            }
            ans -= ans/prime[i];
        }
    }
 
    if(n>1)
    {
        ans -= ans/n;
    }
    return ans;
}


void precal()
{
    phiValue[1] = 0;
    depthPhi[1] = 0;
    sodp[1] = 0;
    for(int x=2; x<=MAXN; x++)
    {
        int totalDepth = 0, number = x;
        while(number>1)
        {
            if(depthPhi[number]!=0)
            {
                totalDepth += depthPhi[number];
                break;
            }
            if(phiValue[number]!=0) number = phiValue[number];
            else
            {
                phiValue[number] = phi(number);
                number = phiValue[number];
            } 
            totalDepth++;
        }
        depthPhi[x] = totalDepth;

        sodp[x] = sodp[x-1] + depthPhi[x];
    }
}




int main()
{
    //freopen("myfile.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    sieve(sqrt(MAXN));
    precal();


    int test, n, l, r;
    scanf("%d",&test);
    while(test--)
    {
        // cout<<"phi->"<<phiValue[n]<<endl;
        // cout<<"depth->"<<depthPhi[n]<<endl;
        // cout<<"sodp->"<<sodp[n]<<endl;
        scanf("%d %d", &l, &r);
        printf("%d\n", sodp[r]-sodp[l-1]);
        
    }
    
    
    
    //printf("\n");

    return 0;
    
}




/*
Sample Input
2
2 10
100000 200000
Sample Output
22
1495105

strategy:
simple precalculation of phi, depthofPhi, and cumulative sum of sodp(sum of depth of phi)

*/