#include<stdio.h>
int main()
{
    int num[100],i,j,n,x,y,z,case_num=1,high,low;
    while(scanf("%d",&y)==1)
    {
        for(j=1;j<=y;j++)
        {
            scanf("%d",&n);
            for(i=0;i<n;i++)
            {
                scanf("%d",&num[i]);
            }
            high=0;
            low=0;
            for(x=0;x<n;x++)
            {
                if(x==0) continue;
                z=num[x]-num[x-1];
                if(z>0) high++;
                if(z<0) low++;
            }
            printf("Case %d: %d %d\n",case_num,high,low);
            case_num++;
        }
    }
    return 0;
}

