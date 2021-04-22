#include<stdio.h>
int main()
{
    int t,n,x,y,count=1,max,num[100];
    while(scanf("%d",&t)==1)
    {
        for(n=1;n<=t;n++)
        {
            max=0;
            scanf("%d",&y);
            for(x=0;x<y;x++)
            {
                scanf("%d",&num[x]);
                if(num[x]>max) max=num[x];
            }
            printf("Case %d: %d\n",count,max);
            count++;
        }
    }
    return 0;
}
