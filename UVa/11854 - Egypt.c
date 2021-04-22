#include<stdio.h>
int main()
{
    long long int a,b,c;
    while(scanf("%lld%lld%lld",&a,&b,&c)==3 && a!=0 && b!=0 && c!=0)
    {
        if(a>=b && a>=c)
            {
                if(a*a==(b*b+c*c))printf("right\n");
                else printf("wrong\n");
            }
        else if(b>=a && b>=c)
            {
                if(b*b==(a*a+c*c))printf("right\n");
                else printf("wrong\n");
            }
        else if(c>=a && c>=b)
            {
                if(c*c==(a*a+b*b))printf("right\n");
                else printf("wrong\n");
            }
    }
    return 0;
}
