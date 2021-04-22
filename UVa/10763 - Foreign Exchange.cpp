#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,x,y,z,count;
    while(scanf("%lld",&t)==1 && t!=0)
    {
        long long int a[t],b[t];
        for(z=0;z<t;z++)
        {
            scanf("%lld %lld",&a[z],&b[z]);
        }
        sort(a,a+t);sort(b,b+t);
        count=0;
        for(x=0,y=0;x<t,y<t;x++,y++)
        {
            if(a[x]==b[y])count=1;
            else
            {
                count=0;
                break;
            }
        }
        if(count==1)printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
