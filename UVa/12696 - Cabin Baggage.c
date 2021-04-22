#include<stdio.h>
int main()
{
    int n,t,count;
    double w,x,y,z;
    while(scanf("%d",&t)==1)
    {
        count=0;
        for(n=1;n<=t;n++)
        {
            scanf("%lf%lf%lf%lf",&x,&y,&z,&w);
            if(((x+y+z)<=125 && w<=7) || (x<=56 && y<=45 && z<=25 && w<=7))
            {
                printf("1\n");
                count++;
            }
            else printf("0\n");
        }
        printf("%d\n",count);
    }
    return 0;
}
