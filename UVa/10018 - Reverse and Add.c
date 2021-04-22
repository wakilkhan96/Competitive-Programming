#include<stdio.h>
int main()
{
    long long int n,s,t,count,number,reverse,rem,sum;
    while(scanf("%lld",&t)==1)
    {
        for(s=1;s<=t;s++)
        {
            scanf("%lld",&number);
            count=0;
            reverse=0;
            while(number!=reverse)
            {
                number=number+reverse;
                n=number;
                sum=0;
                rem=0;
                while(n!=0)
                {
                    rem=n%10;
                    n=n/10;
                    sum=sum*10+rem;
                }
                reverse=sum;
                if(number!=reverse) count++;
            }
            printf("%lld %lld\n",count,number);
        }
    }
    return 0;
}
