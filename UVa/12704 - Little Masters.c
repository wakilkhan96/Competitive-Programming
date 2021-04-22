#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    double x,y,batsman_position,radius,shortest,longest;
    while(scanf("%d",&b)==1)
    {
        for(a=1;a<=b;a++)
        {
            scanf("%lf%lf%lf",&x,&y,&radius);
            batsman_position=sqrt(x*x+y*y);
            shortest=radius-batsman_position;
            longest=radius+batsman_position;
            printf("%.2lf %.2lf\n",shortest,longest);
        }
    }
    return 0;
}
