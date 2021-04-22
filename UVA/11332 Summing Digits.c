#include<stdio.h>
int main()
{
    long long int n,rem,sum;
    while(scanf("%lld",&n)==1 && n>0)
    {
        if(n<10) printf("%lld\n",n);
        else
        {
            first:
                sum=0;
                while(n>0)
                {
                    rem=n%10;
                    n=n/10;
                    sum=sum+rem;
                }
                if(sum>9)
                {
                    n=sum;
                    goto first;
                }
                else printf("%lld\n",sum);
        }
    }
    return 0;
}
