#include<stdio.h>
int main()
{
    long long int x,y,cube,sum;
    while(scanf("%lld",&y)==1)
    {
        cube=1;
        sum=0;
        for(x=1;x<=y;x++)
        {
            cube=x*x*x;
            sum=sum+cube;
        }
        printf("%lld\n",sum);
    }
    return 0;
}
