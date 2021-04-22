#include<bits/stdc++.h>
using namespace std;
#define limit 20000000
#define range 100000
long long int num[limit],twin1[range+2],twin2[range+2];
void dreamliner()
{
    long long int a,b,x,y;
    num[0]=1;
    for(a=2;a<=limit;a++)
    {
        if(num[a]==0)
        {
            for(b=2;a*b<=limit;b++)
            {
                num[a*b]=1;
            }
        }
    }
    y=0;
    for(x=3;y<=range;x++)
    {
        if(num[x]==0 && num[x+2]==0)
        {
            ++y;
            twin1[y]=x;
            twin2[y]=x+2;
        }
    }
}

int main()
{
    long long int w;
    dreamliner();
    while(scanf("%lld",&w)==1)
    {
        printf("(%lld, %lld)\n",twin1[w],twin2[w]);
    }
    return 0;
}
