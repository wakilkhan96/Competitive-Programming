#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int s,t,n,p,q,x,egg,count=1,mass;
    while(scanf("%lld",&t)==1 && t!=0)
    {
        for(s=1;s<=t;s++)
        {
            scanf("%lld %lld %lld",&n,&p,&q);
            long long int egg_mass[n];
            for(x=0;x<n;x++)scanf("%lld",&egg_mass[x]);
            egg=0;mass=0;
            for(x=0;x<n;x++)
            {
                mass+=egg_mass[x];
                if(x+1<=p && mass<=q)egg++;
                else break;
            }
            printf("Case %lld: %lld\n",count++,egg);
        }
    }
    return 0;
}
