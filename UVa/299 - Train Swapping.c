#include<stdio.h>
int main()
{
    long long int n,t,w,x,y,z,count;
    while(scanf("%lld",&t)==1 && n!=0)
    {
        for(z=1;z<=t;z++)
        {
            scanf("%lld",&n);
            int num[n];
            for(x=0;x<n;x++)
            {
                scanf("%lld",&num[x]);
            }
            count=0;
            for(y=0;y<n;y++)
            {
                for(x=0;x<n-1;x++)
                {
                    if(num[x]>num[x+1])
                    {
                        w=0;
                        w=num[x];
                        num[x]=num[x+1];
                        num[x+1]=w;
                        count++;
                    }
                }
            }
            printf("Optimal train swapping takes %lld swaps.\n",count);
        }
    }
    return 0;
}
