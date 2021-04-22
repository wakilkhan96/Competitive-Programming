#include<stdio.h>
int main()
{
    int n,x,y,z,count,lumberjacks[10];
    while(scanf("%d",&n)==1)
    {
        printf("Lumberjacks:\n");
        for(z=1;z<=n;z++)
        {
            for(y=0;y<10;y++)
            {
                scanf("%d",&lumberjacks[y]);
            }
            if(lumberjacks[0]<lumberjacks[1])
            {
                count=0;
                for(x=1;x<10;x++)
                {
                    if(lumberjacks[x-1]<lumberjacks[x])count++;
                }
            }
            else
            {
                count=0;
                for(x=1;x<10;x++)
                {
                    if(lumberjacks[x-1]>lumberjacks[x])count++;
                }
            }

            if((count+1)==10)printf("Ordered\n");
            else printf("Unordered\n");
        }
    }
    return 0;
}
