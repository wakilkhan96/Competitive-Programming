#include <stdio.h>
int main()
{
    long long int a,b,c,w,x,y,z,premium,sub_premium;
    while(scanf("%lld",&z)==1)
    {
        for(y=1;y<=z;y++)
        {
            scanf("%lld",&w);
            premium=0;
            for(x=1;x<=w;x++)
            {
                scanf("%lld%lld%lld",&a,&b,&c);
                if(a<0 || b<0 || c<0) break;
                if(a==0 || b==0 || c==0) break;
                if(a>100000 || b>100000 || c>100000) break;
                ///sub_premium=(a/b)*c*b=a*(b/b)*c=a*c;  a/b is space required for a single animal
                sub_premium=a*(b/b)*c;
                premium=premium+sub_premium;
                sub_premium=0;
            }
            if(a<0 || b<0 || c<0) break;
            if(a>100000 || b>100000 || c>100000) break;
            printf("%lld\n",premium);
        }
        if(a<0 || b<0 || c<0) break;
        if(a>100000 || b>100000 || c>100000) break;
    }
    return 0;
}
