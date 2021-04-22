#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int x,count;
    double y;
    while(scanf("%lld",&x)==1 && x!=0)
    {
        y=sqrt(x);
        if(y==ceil(y))printf("yes\n");
        else printf("no\n");
    }
    return 0;
}
