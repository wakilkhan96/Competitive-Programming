#include <stdio.h>
int main()
{
    long long int n,x,y,count=1,max,product;
    while(scanf("%lld",&n)==1)
    {
        long long int num[n];
        for(y=0;y<n;y++)
        {
            scanf("%lld",&num[y]);
        }
        max=0;
        for(x=1;x<=n;x++)
        {
            product=1;
            for(y=0;y<x;y++)
            {
                product=product*num[y];
            }
            if(product>max)max=product;
        }

        printf("Case #%lld: The maximum product is %lld.\n\n",count,max);
        count++;
    }
    return 0;
}
