#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int m,n,x,y,z,count=1;
    while(scanf("%lld %lld",&m,&n)==2 && m+n!=0)
    {
        long long int marble[m],num[n];
        for(x=0;x<m;x++)scanf("%lld",&marble[x]);
        for(x=0;x<n;x++)scanf("%lld",&num[x]);
        sort(marble,marble+m);
        printf("CASE# %lld:\n",count++);
        for(x=0;x<n;x++)
        {
            z=0;
            for(y=0;y<m;y++)
            {
                if(num[x]==marble[y])
                {
                    printf("%lld found at %lld\n",num[x],y+1);
                    z=1;
                    break;
                }
            }
            if(z==0)printf("%lld not found\n",num[x]);
        }
    }
    return 0;
}
