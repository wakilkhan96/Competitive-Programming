#include<bits/stdc++.h>
using namespace std;
#define range1 300000
#define range2 400000
#define range3 300000
int main()
{
    long long int n,count=1;
    double income,tax,money;
    scanf("%lld",&n);
    while(n--)
    {
        scanf("%lf",&income);
        money=income;tax=0;
        income-=180000;
        if(income>0)
        {
            if(income>=range1)
            {
                tax+=range1*0.1;
                income-=range1;
            }
            else
            {
                tax+=income*0.1;
                income=0;
            }
        }

        if(income>0)
        {
            if(income>=range2)
            {
                tax+=range2*0.15;
                income-=range2;
            }
            else
            {
                tax+=income*0.15;
                income=0;
            }
        }


        if(income>0)
        {
            if(income>=range3)
            {
                tax+=range3*0.20;
                income-=range3;
            }
            else
            {
                tax+=income*0.20;
                income=0;
            }
        }

        if(income>0)
        {
            tax+=income*0.25;
        }
        tax=ceil(tax);
        printf("Case %lld: ",count++);
        if(money<=180000)printf("0\n");
        else if(tax<2000)printf("2000\n");
        else printf("%0.0lf\n",tax);
    }
    return 0;
}
