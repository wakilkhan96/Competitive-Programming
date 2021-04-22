#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,k,n,w,x,y,z,count=1;
    while(scanf("%d",&b)==1 && b!=0)
    {
        for(a=1;a<=b;a++)
        {
            scanf("%d%d%d",&n,&k,&x);
            z=x+k-1;
            w=((n*(n+1))-(z*(z+1))+(x*(x-1)))/2;
            printf("Case %d: %d\n",count++,w);
        }
    }
    return 0;
}
