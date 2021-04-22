#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,w,x,y,count;
    while(scanf("%lld",&n)==1 && n!=0)
    {
        long long int num[n];
        for(x=0;x<n;x++)
        {
                scanf("%lld",&num[x]);
        }
        count=0;
        for(y=0;y<n;y++)
        {
            for(x=0;x<n-1;x++)
            {
                if(num[x]>num[x+1])
                {
                    w=0;
                    w=num[x];
                    num[x]=num[x+1];
                    num[x+1]=w;
                    count++;
                }
            }
        }
        printf("Minimum exchange operations : %lld\n",count);
    }
    return 0;
}
