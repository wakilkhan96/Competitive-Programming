#include<stdio.h>
int main()
{
    int n,x,y,avarage,case_num=0,moves,height[200],sum;
    while(scanf("%d",&n)==1 && n!=0)
    {
        sum=0;
        for(x=0;x<n;x++)
        {
            scanf("%d",&height[x]);
            sum+=height[x];
        }
        avarage=sum/n;
        moves=0;
        for(y=0;y<n;y++)
        {
            if(height[y]>avarage)
            {
                moves+=height[y]-avarage;
            }
        }
        printf("Set #%d\nThe minimum number of moves is %d.\n",++case_num,moves);
        printf("\n");
    }
    return 0;
}
