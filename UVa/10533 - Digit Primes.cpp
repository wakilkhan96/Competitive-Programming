#include<bits/stdc++.h>
using namespace std;
#define limit 1000002
long long num[limit];
long long digit[limit];
void f()
{
    long long a,b,c=sqrt(limit),count=0;
    for(a=2;a<=c;a++)
    {
        if(num[a]==0)
        {
            for(b=2;a*b<=limit;b++)
            {
                num[a*b]=1;
            }
        }
    }
    a=b=0;
    digit[0]=digit[1]=0;
    for(a=2;a<=limit;a++)
    {
        if(!num[a])
        {
            int sum=0;b=a;
            while(b)
            {
                sum+=b%10;
                b/=10;
            }
            if(!num[sum])count++;
        }
        digit[a]=count;
    }
}

int main()
{
    f();
    long long n,x,y,z;
    cin>>n;
    while(n--)
    {
        cin>>x>>y;
        if(x>y)swap(x,y);
        printf("%lld\n",digit[y]-digit[x-1]);
    }
    return 0;
}
