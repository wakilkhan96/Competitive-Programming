#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,w,x,y;
    while(scanf("%lld",&n)==1 && n!=0)
    {
        int num[n];
        for(x=0;x<n;x++)
        {
            scanf("%lld",&num[x]);
        }
        sort(num,num+n);
        for(x=0;x<n;x++)
        {
            printf("%d",num[x]);
            if(x!=n-1)printf(" ");
        }
        printf("\n");
    }
    return 0;
}
