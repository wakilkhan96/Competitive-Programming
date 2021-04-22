#include<stdio.h>
int main()
{
    long long int x,y;
    while(scanf("%lld",&y)==1 && y>-1)
    {
        x=((y*(y+1))/2)+1;
        printf("%lld\n",x);
    }
    return 0;
}
