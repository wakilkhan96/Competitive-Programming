#include <stdio.h>
int main()
{
    long long int a,b,ans;
    while(scanf("%lld %lld",&a,&b)!=EOF)
    {
        ans=a-b;
        if(ans>=0)printf("%lld\n",ans);
        else printf("%lld\n",ans*-1);
    }
    return 0;
}

