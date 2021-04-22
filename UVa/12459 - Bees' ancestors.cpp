#include<bits/stdc++.h>
using namespace std;
long long int num[100];
void dreamliner()
{
    long long int w,x,y,z;
    x=0;y=1;z=0;
    for(w=1;w<=90;w++)
    {
        z=x+y;
        num[w]=z;
        x=y;
        y=z;
    }
}
int main()
{
    long long int n;
    dreamliner();
    while(scanf("%lld",&n)==1 && n!=0)
    {
        printf("%lld\n",num[n]);
    }
    return 0;
}
