#include <stdio.h>
int main()
{
    int t,n,h,m,x=0,y=0,time;
    char c;
    while(scanf("%d",&t)==1)
    {
        for(n=1;n<=t;n++)
        {
            scanf("%d%c%d",&h,&c,&m);
            time=h*60+m;
            if(time>720)
            {
                time=time-720;
            }
            time=720-time;
            x=time/60;
            y=time%60;
            if (x==0)x=12;
            printf("%02d:%02d\n",x,y);
        }
    }
    return 0;
}
