#include<bits/stdc++.h>
#define limit 1000000
using namespace std;
long long int num[limit];
void dreamliner()
{
    long long int a,b;
    num[0]=1;
    for(a=2;a<=limit;a++)
    {
        if(num[a]==0)
        {
            for(b=2;a*b<=limit;b++)
            {
                num[a*b]=1;
            }
        }
    }
}

int main()
{
    dreamliner();
    long long int c,n,x,y,z,count,needed,all;
    while(scanf("%lld %lld",&n,&c)==2 && n+c!=0)
    {
        long long int prime[500];
        y=0;count=0;
        for(x=1;x<=n;x++)
        {
            if(num[x]==0)
            {
                prime[y++]=x;
                ++count;
            }
        }
        all=count;
        if(count%2==0)needed=c*2;
        else needed=c*2-1;

        printf("%lld %lld:",n,c);

        if(needed>=all)
        {
            for(x=0;x<count;x++)
                printf(" %lld",prime[x]);
        }
        else
        {
            z=(all-needed)/2;
            for(x=z;x<all-z;x++)
                printf(" %lld",prime[x]);
        }
        printf("\n\n");
    }
    return 0;
}
