#include<stdio.h>
int main()
{
    long long int n,x,y,num,rem,digit[2];
    while(scanf("%lld",&n)==1)
    {
        for(x=1;x<=n;x++)
        {
            scanf("%lld",&num);
            num=num*567;
            num=num/9;
            num=num+7492;
            num=num*235;
            num=num/47;
            num=num-498;

            if(num<0) num=num*-1;
            for(y=0;y<2;y++)
            {
                rem=num%10;
                num=num/10;
                digit[y]=rem;
            }
            printf("%lld\n",digit[1]);
        }
    }
    return 0;
}
