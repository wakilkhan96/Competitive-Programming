#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int m=0,n=0,x,y,sum,dragon[20005],army[20005];
    while(scanf("%lld %lld",&n,&m)==2 && m+n!=0)
    {
        ///long long int dragon[n],army[m];
        for(x=0;x<n;x++)scanf("%lld",&dragon[x]);
        for(x=0;x<m;x++)scanf("%lld",&army[x]);
        if(n>m)
        {
            printf("Loowater is doomed!\n");
            continue;
        }
        sort(dragon,dragon+n);sort(army,army+m);
        sum=0;
        for(x=0,y=0;x<n&&y<m;y++)
        {
            if(army[y]>=dragon[x])
            {
                sum+=army[y];
                x+=1;
            }
        }
        if(x==n)printf("%lld\n",sum);
        else printf("Loowater is doomed!\n");
    }
    return 0;
}
