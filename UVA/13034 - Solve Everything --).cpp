#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,x,y=1,z,num[13];
    while(scanf("%d",&t)==1)
    {
        for(n=1;n<=t;n++)
        {
            z=1;
            for(x=0;x<13;x++)
            {
                scanf("%d",&num[x]);
                if(num[x]==0)z=0;
            }
            if(z==1)printf("Set #%d: Yes\n",y++);
            else printf("Set #%d: No\n",y++);
        }
    }
    return 0;
}
