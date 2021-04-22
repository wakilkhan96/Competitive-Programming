#include<bits/stdc++.h>
#define limit 1000000
long long int num[limit];
void dreamliner()
{
    long long int a,b;
    num[0]=1;
    for(a=2;a<=sqrt(limit);a++)
    {
        if(num[a]==0)
        {
            for(b=2;a*b<=limit;b++)
            {
                num[a*b]=1;
            }
        }
    }
}

int main()
{
    dreamliner();
    long long int n,x,y,z;
    while(scanf("%lld",&n)==1 && n!=0)
    {
        z=0;
        for(x=2,y=n-2;x<=n/2;x++,y--)
        {
            if(num[x]==0 && num[y]==0)
            {
                if((x+y)==n)
                {
                    z=1;
                    break;
                }
                else z=0;
            }
        }
        if(z==1)printf("%lld = %lld + %lld\n",n,x,y);
        else printf("Goldbach's conjecture is wrong.\n");
    }
    return 0;
}

