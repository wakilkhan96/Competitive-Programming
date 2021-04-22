#include<bits/stdc++.h>
#define limit 1000000
using namespace std;
long long int num[limit];
void dreamliner()
{
    long long int x,sum=0;
    num[0]=0;
    num[1]=1;
    for(x=2;x<limit;x++)
    {
        sum=num[x-1]+num[x-2]+1;
        num[x]=sum;
    }
}
int main()
{
    long long int n;
    dreamliner();
    while(scanf("%lld",&n)==1 && n!=-1)
    {
        printf("%lld %lld\n",num[n],num[n+1]);
    }
    return 0;
}
