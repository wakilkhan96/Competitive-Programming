#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long int a,b,c,d,s,t,m,n,x,y,rem,sum;
    while(scanf("%lu",&t)==1 && t!=0)
    {
        for(s=1;s<=t;s++)
        {
            scanf("%lu",&n);
            c=n;
            sum=0;
            while(c!=0)
            {
                sum+=c%2;
                c=c/2;
            }
            a=sum;

            d=n;
            y=0;rem=0;
            for(x=0;d!=0;x++)
            {
                rem=d%10;
                y+=rem*pow(16,x);
                d=d/10;
            }

            c=y;
            sum=0;
            while(c!=0)
            {
                sum+=c%2;
                c=c/2;
            }
            b=sum;

            printf("%lu %lu\n",a,b);
        }
    }
    return 0;
}
