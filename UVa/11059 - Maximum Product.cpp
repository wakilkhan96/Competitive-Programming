#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long int n,x,y,z=1,max,sum,num[20];
    while(scanf("%lld",&n)==1)
    {
        max=0;
        for(x=0;x<n;x++)cin>>num[x];
        for(x=0;x<n;x++)
        {
            sum=1;
            for(y=x;y<n;y++)
            {
                sum*=num[y];
                if(sum>max)
                    max=sum;
            }
        }
        printf("Case #%lld: The maximum product is %lld.\n\n",z++,max);
    }
    return 0;
}
