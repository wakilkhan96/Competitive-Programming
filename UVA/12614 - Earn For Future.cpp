#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,x,y,max,count=0;;
    while(scanf("%lld",&t)==1 && t!=0)
    {
        for(n=1;n<=t;n++)
        {
            scanf("%lld",&y);
            long long int num[y];
            max=0;
            for(x=0;x<y;x++)
            {
                scanf("%lld",&num[x]);
                if(num[x]>max)max=num[x];
            }
            printf("Case %lld: %lld\n",++count,max);
        }
    }
    return 0;
}
