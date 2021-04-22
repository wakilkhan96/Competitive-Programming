#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,x,sum;
    printf("PERFECTION OUTPUT\n");
    while(scanf("%lld",&n)==1 && n!=0)
    {
        sum=0;
        for(x=1;x<=n/2;x++)
        {
            if(n%x==0)sum+=x;
        }
        if(sum<n)printf("%5lld  DEFICIENT\n",n);
        else if(sum==n)printf("%5lld  PERFECT\n",n);
        else if(sum>n)printf("%5lld  ABUNDANT\n",n);
    }
    printf("END OF OUTPUT\n");
    return 0;
}

