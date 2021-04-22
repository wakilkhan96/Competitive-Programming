#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,l,x,y,mid,sum;
    while(scanf("%lld",&t)==1 && t!=0)
    {
        for(n=1;n<=t;n++)
        {
            scanf("%lld",&l);
            long long int num[l];
            for(x=0;x<l;x++)
            {
                scanf("%lld",&num[x]);
            }
            sort(num,num+l);
            if(l%2==0)mid=(l/2)-1;
            else mid=((l+1)/2)-1;
            sum=0;
            for(x=0;x<l;x++)
            {
                sum+=abs(num[mid]-num[x]);
            }
            printf("%lld\n",sum);
        }
    }
    return 0;
}
