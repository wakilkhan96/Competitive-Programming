#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int x,y,z,count=1;
    double d,u,v,t,t1,t2;
    scanf("%lld",&y);
    while(y--)
    {
        scanf("%lf %lf %lf",&d,&v,&u);
        if(u==0 || v==0 || v>=u)printf("Case %lld: can't determine\n",count++);
        else
        {
            t1=d/u;
            t2=d/sqrt((u*u)-(v*v));
            t=fabs(t1-t2);
            printf("Case %lld: %.3lf\n",count++,t);
        }
    }
    return 0;
}
