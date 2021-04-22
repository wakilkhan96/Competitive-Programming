#include<bits/stdc++.h>
using namespace std;
#define limit 1000001
long long num[limit];
void f()
{
    long long a,b;
    num[0]=1;num[1]=1;
    for(a=2;a<=sqrt(limit);a++)
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
    f();
    long long n,x,y;
    while(cin>>n)
    {
        if(!n)break;
        bool check=false;
        for(x=2;x<limit;x++)
        {
            y=n-x;
            if(!num[x] && y>1 && !num[y])
            {
                check=true;
                break;
            }
        }
        printf("%lld:\n",n);
        if(check)printf("%lld+%lld\n",x,y);
        else printf("NO WAY!\n");
    }
    return 0;
}


