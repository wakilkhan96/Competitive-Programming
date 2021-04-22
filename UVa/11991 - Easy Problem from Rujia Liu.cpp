#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int m,n,k,v,x,y,count;
    while(scanf("%lld %lld",&n,&m)==2 && m+n!=0)
    {
        long long int num[n];
        for(x=0;x<n;x++)scanf("%lld",&num[x]);
        for(y=1;y<=m;y++)
        {
            scanf("%lld %lld",&k,&v);
            count=0;
            for(x=0;x<n;x++)
            {
                if(num[x]==v)count++;
                if(count==k)break;
            }
            if(count==k)printf("%lld\n",x+1);
            else printf("0\n");
        }
    }
    return 0;
}
