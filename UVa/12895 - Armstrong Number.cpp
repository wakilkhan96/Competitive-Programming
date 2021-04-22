#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,l,x,z,sum,num;
    double y;
    char temp[100];
    while(scanf("%lld",&t)!=EOF)
    {
        for(n=1;n<=t;n++)
        {
            scanf("%s",temp);
            l=strlen(temp);
            num=0;
            for(x=0;x<l;x++)
            {
                y=(temp[x]-'0')*pow(10,l-x-1);
                num+=y;
            }
            //printf("num=%lld\n",num);
            sum=0;
            for(x=0;x<l;x++)
            {
                z=temp[x]-'0';
                y=pow(z,l);
                sum+=y;
            }
            //printf("sum=%lld\n",sum);
            if(sum==num)printf("Armstrong\n");
            else printf("Not Armstrong\n");
        }
    }
    return 0;
}
