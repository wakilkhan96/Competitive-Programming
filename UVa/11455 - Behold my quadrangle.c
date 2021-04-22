#include<stdio.h>
int main()
{
    long long int a,b,c,d,x,y;
    while(scanf("%lld",&y)==1)
    {
        for(x=1;x<=y;x++)
        {
            scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
            if(a==b && b==c && c==d) printf("square\n");
            else if((a==b && c==d) || (b==c && d==a) || (a==c&& b==d)) printf("rectangle\n");
            else if((a<b+c+d) && (b<c+d+a) && (c<d+a+b) && (d<a+b+c) ) printf("quadrangle\n");
            else printf("banana\n");
        }
    }
    return 0;
}
