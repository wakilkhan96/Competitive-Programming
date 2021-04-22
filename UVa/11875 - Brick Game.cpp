#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,x,y,z,count=0;
    while(scanf("%d",&t)==1 && t!=0)
    {
        for(y=1;y<=t;y++)
        {
            scanf("%d",&n);
            int age[n];
            for(x=0;x<n;x++)
            {
                scanf("%d",&age[x]);
            }
            sort(age,age+n);
            printf("Case %d: %d\n",++count,age[n/2]);
        }
    }
    return 0;
}
