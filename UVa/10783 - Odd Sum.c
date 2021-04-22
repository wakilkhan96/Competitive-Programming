#include <stdio.h>
int main()
{
    long long int a,b,c,d,n,x,y,sum;
    while(scanf("%lld",&d)==1)
    {
        for(c=1;c<=d;c++)
        {
        scanf("%lld%lld",&x,&y);
        if(x>y)
        {
            b=x;
            a=y;
        }
        else
        {
            a=x;
            b=y;
        }
            sum=0;
            for(n=a;n<=b;n++)
            {
                if(n%2==1)
                {
                    sum=sum+n;
                }
            }
            printf("Case %lld: %lld\n",c,sum);
        }
    }
    return 0;
}
