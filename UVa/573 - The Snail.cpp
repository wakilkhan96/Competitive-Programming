#include<bits/stdc++.h>
using namespace std;
int main()
{
    double day,height,climbing_distance;
    double h,u,d,f,x;
    while(scanf("%lf %lf %lf %lf",&h,&u,&d,&f)==4 && h!=0)
    {
        f=(u*f)/100; //fatigue factor is in percentage form of the distance that the snail climbs during 1st day
        day=1;climbing_distance=u;
        height=0;
        while(1)
        {
            height+=climbing_distance;
            if(height>h)
            {
                x=1;
                break;
            }
            else x=0;
            if(climbing_distance>0)climbing_distance-=f; //when climbing distance is<0 'already' you can't
                                                        //subtract the fatigue factor again
            height-=d;
            if(height<0)break;
            day++;
        }
        if(x==1)printf("success on day %.0lf\n",day);
        else printf("failure on day %.0lf\n",day);
    }
    return 0;
}
