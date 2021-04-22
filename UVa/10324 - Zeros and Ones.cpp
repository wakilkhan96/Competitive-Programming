#include<bits/stdc++.h>
#define limit 1000000
using namespace std;
int main()
{
    long long int c,n,u,w,x,y,z,sum,count=1;
    char num[limit];
    while(scanf("%s",&num)!=EOF)
    {
        scanf("%lld",&n);
        printf("Case %lld:\n",count);
        for(z=1;z<=n;z++)
        {
            scanf("%lld %lld",&x,&y);
            if(x>y)
            {
                c=x;x=y;y=c;
            }
            sum=0;u=y-x;
            for(w=x;w<y;w++)
            {
                if(num[w]==num[w+1])sum++;
            }
            if(sum==u)printf("Yes\n");
            else printf("No\n");
        }
        count++;
    }
    return 0;
}
