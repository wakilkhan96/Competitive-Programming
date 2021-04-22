#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,w,x,y,z,rem,sum,count=1;
    while(scanf("%lld",&t)==1 && t!=0)
    {
        for(z=1;z<=t;z++)
        {
            scanf("%lld",&w);
            n=w;
            while(1)
            {
                sum=0;rem=0;
                while(n!=0)
                {
                    rem=n%10;
                    n=n/10;
                    sum+=rem*rem;
                }
                if(sum==1 || sum==4)break;
                else n=sum;
            }
            if(sum==1)printf("Case #%lld: %lld is a Happy number.\n",count++,w);
            else printf("Case #%lld: %lld is an Unhappy number.\n",count++,w);
        }
    }
    return 0;
}
