#include <bits/stdc++.h>
using namespace std;
 
int n,k;
const int MOD=1e9+7;
 
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d %d",&n,&k);
        long long ans=1;
        for(int i=0;i<k;i++) ans=(ans*n)%MOD;
        printf("%lld\n",ans);
    }
}