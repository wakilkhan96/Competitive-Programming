#include<bits/stdc++.h>
using namespace std;
int main()
{
    static long long int t,n,x,y,num[20];
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        for(x=1;x<=n;x++)
        {
            if(x<10)num[x]+=1;
            else
            {
                y=x;
                while(y!=0)
                {
                    num[y%10]+=1;
                    y/=10;
                }
            }
        }
        for(x=0;x<10;x++)
        {
            printf("%lld",num[x]);
            if(x!=9)printf(" ");
            num[x]=0;
        }
        printf("\n");
    }
    return 0;
}
