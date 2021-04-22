#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,x,y,z,count=1;
    while(scanf("%lld %lld %lld",&x,&y,&z)==3)
    {
        t=1;
        for(n=1;n<=y;n++)
        {
            t=((t%z)*(x%z))%z;
        }
        printf("%lld\n\n",t);
    }
    return 0;
}
