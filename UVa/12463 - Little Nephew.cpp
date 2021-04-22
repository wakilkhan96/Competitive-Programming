#include<bits/stdc++.h>
#define show printf
using namespace std;
int main()
{
    long long a,b,c,d,e;
    while(scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e)==5 && a+b+c+d+e!=0)
    {
        show("%lld\n",a*b*c*d*d*e*e);
    }
    return 0;
}
