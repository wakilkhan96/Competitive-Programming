#include <stdio.h>
int number[2000];
int main()
{
    int n,t,x,y,avarage,count,sum;
    double percentage;
    while(scanf("%d",&t)==1 && t!=0)
    {
        for(y=1;y<=t;y++)
        {
            scanf("%d",&n);
            sum=0;
            for(x=0;x<n;x++)
            {
                scanf("%d",&number[x]);
                sum+=number[x];
            }
            avarage=0;
            avarage=sum/n;
            count=0;
            for(x=0;x<n;x++)
            {
                if(number[x]>avarage) count++;
            }
            if(count>0)
                {
                    percentage=((float)count/(float)n)*100;
                    printf("%.3lf%%\n",percentage);
                }
            else printf("0.000%%\n");
        }
    }
    return 0;
}
