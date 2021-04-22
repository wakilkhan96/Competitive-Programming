#include<bits/stdc++.h>
using namespace std;
#define pi 2*acos(0.0)
int main()
{
    double r,n,x,y;
    while(scanf("%lf %lf",&r,&n)!=EOF)
    {
        x=(r*r*sin(2*pi/n))/2;
        y=n*x;
        printf("%.3lf\n",y);
    }
    return 0;
}
