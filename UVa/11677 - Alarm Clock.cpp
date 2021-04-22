#include<stdio.h>
int main()
{
    int h,h1,h2,m,m1,m2,time;
    while(scanf("%d %d %d %d",&h1,&m1,&h2,&m2)==4)
    {
        if((h1+h2+m1+m2)==0)break;

        if(h1>h2)
        {
            h1=23-h1;m1=60-m1;
            h=h1+h2;m=m1+m2;
        }

        else if(h1<h2)
        {
            h=h1-h2;m=m1-m2;
            start:
                if(h<0)
                {
                    h=h*-1;m=m*-1;
                }
                if(m<0)
                {
                    h=h-1;m=m+60;
                }
                if(h<0 || m<0)goto start;
        }

        else if(h1==h2)
        {
            if(m1<m2)
            {
                h=0;m=m2-m1;
            }
            if(m1>m2)
            {
                h=23;m1=60-m1;
                m=m1+m2;
            }
        }

        time=(h*60)+m;
        printf("%d\n",time);
    }
    return 0;
}
