#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,w,x,y,z;
    while(scanf("%lld",&n)==1 && n!=0)
    {
        w=0;
        for(x=1;x<60;x++)
        {
            for(y=0;y<x;y++)
            {
                if(x*x*x-y*y*y==n)
                {
                    w=1;
                    goto result;
                }

            }
        }
        result:
            if(w==1) printf("%lld %lld\n",x,y);
            else printf("No solution\n");
    }
    return 0;
}
