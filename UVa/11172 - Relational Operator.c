#include <stdio.h>
int main()
{
    long int x,y,a,b;
    while(scanf("%lld",&x)==1)
    {
        for(y=1;y<=x;y++)
        {
            scanf("%lld%lld",&a,&b);
            if(a>b)printf(">");
            if(a<b)printf("<");
            if(a==b)printf("=");
            printf("\n");
        }
    }
    return 0;
}
