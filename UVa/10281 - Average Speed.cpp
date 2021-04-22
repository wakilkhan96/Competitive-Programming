#include <bits/stdc++.h>
using namespace std;

int main()
{
    char c, time[20]="";
    double h , m , s;
    double speed = 0 , current = 0 , prev = 0 , dis;

    while(scanf("%s",time)!=EOF)
    {
        c = getchar();


        sscanf( time, "%lf:%lf:%lf", &h, &m, &s);
        current = (h*3600)+(m*60)+s;
        dis += ( (current - prev)*speed)/3600.0;
        prev = current;

        if( c == ' ' ) scanf("%lf", &speed);
        if( c != ' ' ) printf("%s %.2lf km\n",time,dis);
    }

    return 0;
}
