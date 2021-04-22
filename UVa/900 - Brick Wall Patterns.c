#include <stdio.h>
int main()
{
    long long int n,x,y,z,sum;
    while(scanf("%lld",&n)==1 && n!=0)
    {
        x=0;
        y=1;
        sum=0;
        for(z=1;z<=n;z++)
        {
            sum=x+y;
            x=y;
            y=sum;
        }
        printf("%lld\n",sum);
    }
    return 0;
}
