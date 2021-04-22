#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,s,n,x,y,z,max;
    while(scanf("%lld ",&t)==1 && t!=0)
    {
        for(s=1;s<=t;s++)
        {
            scanf("%lld %lld ",&n,&max);
            long long int num[n];
            for(x=0;x<n;x++)
            {
                scanf("%lld",&num[x]);
            }
            sort(num,num+n);
            y=0;z=0;
            for(x=0;x<n;x++)
            {
                y+=num[x];
                if(y>max)break;
                else z++;
            }
            printf("%lld\n",z);
        }
    }
    return 0;
}
