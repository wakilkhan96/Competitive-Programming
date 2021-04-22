#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,t,n,x,y,z,count;
    while(scanf("%d",&b)!=EOF)
    {
        for(a=1;a<=b;a++)
        {
            scanf("%d",&n);
            int num[n];
            for(x=0;x<n;x++)
            {
                scanf("%d",&num[x]);
            }
            sort(num,num+n);
            reverse(num,num+n);
            count=0;
            for(x=2;x<n;x+=3)
            {
                count+=num[x];
            }
            printf("%d\n",count);
        }
    }
    return 0;
}
