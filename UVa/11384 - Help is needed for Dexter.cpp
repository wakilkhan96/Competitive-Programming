#include<stdio.h>
#include<math.h>
int main()
{
    long long int n,x,y;
    while(scanf("%lld",&n)==1 && n!=0)
    {
        for(x=0;;x++)
        {
            y=pow(2,x);
            if(y<=n)continue;
            else break;
        }
        printf("%lld\n",x);
    }
    return 0;
}
