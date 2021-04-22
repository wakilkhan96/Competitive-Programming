#include <stdio.h>
int main()
{
    long long int n,k,cigarette=0,rest,total,free;
    while(scanf("%lld%lld",&n,&k)==2)
    {
        total=0;
        free=0;
        cigarette=n;
        rest=cigarette%k;
        free=cigarette/k;
        total=cigarette+free;
        rest=rest+free;
        while(rest>=k)
        {
            free=rest/k;
            rest=rest%k;
            rest=rest+free;
            total+=free;
        }
        printf("%lld\n",total);
    }
    return 0;
}

