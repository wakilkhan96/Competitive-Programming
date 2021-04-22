#include<bits/stdc++.h>
using namespace std;
int cola(int n)
{
    int free=n/3;
    int rest=n%3;
    if(n==1)return 0;
    else if(n==2)return 1;
    else
    {
        return free+cola(free+rest);
    }
}
int main()
{
    long long int n,x,y,z;
    while(scanf("%lld",&x)==1 && x!=0)
    {
        y=cola(x);
        printf("%lld\n",y);
    }
    return 0;
}

