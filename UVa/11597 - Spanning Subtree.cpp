#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=1,x;
    while(1)
    {
        scanf("%d",&x);
        if(x==0)break;
        printf("Case %d: %d\n",n++,x>>1);
    }
    return 0;
}
