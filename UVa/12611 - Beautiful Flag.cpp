#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,count=1;
    double r,x1,x2,y1,y2,c1,c2,length,width,radius;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lf",&r);
        length=5*r;width=(length*6)/10;
        printf("Case %d:\n",count++);
        printf("-%.0lf %.0lf\n",(length*45)/100,width/2);
        printf("%.0lf %.0lf\n",(length*55)/100,width/2);
        printf("%.0lf -%.0lf\n",(length*55)/100,width/2);
        printf("-%.0lf -%.0lf\n",(length*45)/100,width/2);
    }
    return 0;
}
