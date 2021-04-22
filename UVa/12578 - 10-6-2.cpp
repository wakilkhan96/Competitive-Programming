#include<bits/stdc++.h>
using namespace std;
#define Pi 2*acos(0.0)
int main()
{
    int x,y;
    double length,width,radius,red,green;
    while(scanf("%d",&x)==1)
    {
        for(y=1;y<=x;y++)
        {
            scanf("%lf",&length);
            radius=(length/5)*1;
            width=(length/10)*6;
            red=Pi*radius*radius;
            green=(length*width)-red;
            printf("%.2lf %.2lf",red,green);
            printf("\n");
        }
    }
    return 0;
}

