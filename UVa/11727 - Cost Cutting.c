#include <stdio.h>
int main()
{
    long long int a,b,c,x,y;
    while(scanf("%lld",&y)==1)
        for(x=1;x<=y;x++)
    {
        scanf("%lld%lld%lld",&a,&b,&c);
        if(a>=b && a>=c)
        {
            if(b>=c) printf("Case %lld: %lld\n",x,b);
            else printf("Case %lld: %lld\n",x,c);
        }
        else if(b>=a && b>=c)
        {
            if(a>=c) printf("Case %lld: %lld\n",x,a);
            else printf("Case %lld: %lld\n",x,c);
        }
        else if(c>=a && c>=b)
        {
            if(a>=b) printf("Case %lld: %lld\n",x,a);
            else printf("Case %lld: %lld\n",x,b);
        }
    }
    return 0;
}
