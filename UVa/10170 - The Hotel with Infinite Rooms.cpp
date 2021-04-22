#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long int n,x,y,day;
    while(scanf("%lld %lld",&n,&day)==2)
    {
        y=0;
        for(x=n;;x++)
        {
            y=(x*(x+1)/2)-(n*(n-1)/2);
            if(y>=day)break;
        }
        printf("%lld\n",x);
    }
    return 0;
}
