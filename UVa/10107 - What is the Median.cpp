#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int x=0,num[100000];
    while(scanf("%lld",&num[x])==1)
    {
        sort(num,num+x+1);
        if((x+1)%2==1)printf("%lld\n",num[(x+1)/2]);
        else printf("%lld\n",(num[(x+1)/2]+num[((x+1)/2)-1])/2);
        x++;
    }
    return 0;
}
