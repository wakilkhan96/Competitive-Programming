#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,x,y,count=0,sum=0;
    while(scanf("%lld %lld",&n,&m)==2 && m+n!=0)
    {
        sum=0;
        for(y=1;y<=n;y++)
        {
            int num[m];
            count=0;
            for(x=0;x<m;x++)
            {
                scanf("%lld",&num[x]);
                if(num[x]>0)count++;
            }
            if(count==m)sum++;
        }
        printf("%lld\n",sum);
    }
    return 0;
}
