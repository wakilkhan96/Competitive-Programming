#include<stdio.h>
int main()
{
    double h,m,x;
    double y;
    char c;
    while(scanf("%lf%c%lf",&h,&c,&m)==3)
    {
        if(h==0 && m==0)break;
        x=((11*m)-(60*h))/2;
        if(x<0)x=x*-1;
        if(x>180)x=360-x;
        if(x<0)x=x*-1;
        y=x;
        printf("%.3lf\n",y);
    }
    return 0;
}
