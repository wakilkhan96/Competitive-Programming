#include<bits/stdc++.h>
#define show printf
using namespace std;
long long int z;
int MOD(int a,int b)
{
    if(b==0)return 1;
    if(b%2==0)return (MOD(a,b/2)%z * MOD(a,b/2)%z)%z;
    else return (a%z * MOD(a,b-1)%z)%z;
}

int main()
{
    long long int t,x,y,count=1;
    while(scanf("%lld %lld %lld",&x,&y,&z)==3)
    {
        t=MOD(x,y);
        show("%lld\n",t);
        count++;
    }
    return 0;
}

