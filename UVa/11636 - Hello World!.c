#include<stdio.h>
#include<math.h>
int main()
{
    long long int n,x,count,case_num=1;
    while(scanf("%lld",&n)==1 && n>-1)
    {
        count=0;
        x=1;
        while(x<n)
        {
            if(n==0) break;
            if(n==1) break;
            ++count;
            if(n==2) break;
            x=x*2;
        }
        printf("Case %lld: %lld\n",case_num,count);
        case_num++;
    }
    return 0;
}
