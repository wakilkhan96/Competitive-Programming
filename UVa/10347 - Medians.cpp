#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,s,area;
    while (scanf("%lf%lf%lf",&a,&b,&c)==3)
    {
        s=(a+b+c)/2;
        area=(4.0/3.0)*sqrt(s*(s-a)*(s-b)*(s-c));

        if(area > 0)
            printf("%0.3lf\n",area);
        else
            printf("-1.000\n");
    }
    return 0;
}
