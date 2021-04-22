#include <stdio.h>
int main()
{
    long long int n,rem,sum;
    while(scanf("%lld",&n)==1 && n>0)
    {
        if(n<10) printf("%lld\n",n);
        else
        {
            start:
                sum=0;
                while(n>0)
                {
                    rem=n%10;
                    n=n/10;
                    sum=sum+rem;
                }
        if(sum<10)
        {
            printf("%lld\n",sum);
        }
        else
        {
            n=sum;
            goto start;
        }
        }
    }
    return 0;
}
