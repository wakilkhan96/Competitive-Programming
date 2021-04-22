#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,x,y;
    double avg,money,sum;
    while(scanf("%d",&t)==1)
    {
        for(n=1;n<=t;n++)
        {
            sum=0;
            for(x=1;x<=12;x++)
            {
                scanf("%lf",&money);
                sum+=money;
            }
            avg=sum/12;
            if(avg>=1000)
            {
                y=avg/1000;
                printf("%d $%d,%.2lf\n",n,y,avg-1000*y);
            }
            else printf("%d $%.2lf\n",n,avg);
        }
    }
    return 0;
}
