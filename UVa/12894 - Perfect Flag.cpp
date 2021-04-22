#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    double r,x1,x2,y1,y2,c1,c2,length,width,radius;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lf %lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&c1,&c2,&r);
        length=x2-x1;width=y2-y1;
        if(width!=(length*6)/10)
        {
            printf("NO\n");continue;
        }
        c1-=x1;c2-=y1;
        radius=length/5;
        length=(length*9)/20;
        width/=2;
        if(c1==length && c2==width && radius==r)printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
