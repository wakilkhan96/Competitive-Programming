#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,n,x,y,z,balance,diff,min;
    while(scanf("%d",&n)!=EOF)
    {
        int num[n];
        for(x=0;x<n;x++)
        {
            scanf("%d",&num[x]);
        }
        scanf("%d",&balance);
        sort(num,num+n);
        diff=0;min=0;
        a=0;b=0;
        for(x=0;x<n;x++)
        {
            for(y=0;y<n;y++)
            {
                if(x==y)continue;
                if(num[x]+num[y]==balance)
                {
                    diff=abs(num[x]-num[y]);
                    if(a==0 && b==0)
                    {
                        a=num[x];b=num[y];
                        min=diff;
                    }
                    else
                    {
                        if(diff<min)
                        {
                            a=num[x];b=num[y];
                            min=diff;
                        }
                    }

                }
            }
        }
        printf("Peter should buy books whose prices are %d and %d.\n\n",a,b);
    }
    return 0;
}
