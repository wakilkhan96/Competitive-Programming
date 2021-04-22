#include<stdio.h>
int main()
{
    long long int a,b,i,j,n,x,count,cycle;
    while(scanf("%lld%lld",&i,&j)==2)
    {
        a=i;b=j;
        if(i>j)
        {
            a=j;
            b=i;
        }
        cycle=1;
        for(x=a;x<=b;x++)
        {
            n=x;
            count=1;
            while(n>1)
            {
                if(n%2!=0)
                    n=3*n+1;
                else
                    n=n/2;
                count++;
            }
            if(count>cycle)
            {
                cycle=count;
            }
        }
        printf("%lld %lld %lld",i,j,cycle);
        printf("\n");
    }

    return 0;
}
