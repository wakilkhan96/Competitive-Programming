#include<stdio.h>
int main()
{
    long long int x,y;
    while(scanf("%lld",&x)==1 && x>-1)
    {
        if(x>1)
        {
           printf("%lld%%\n",x*25);
        }
        else printf("0%%\n");
    }
    return 0;
}
