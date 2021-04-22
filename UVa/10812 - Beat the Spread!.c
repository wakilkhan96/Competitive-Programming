#include<stdio.h>
int main()
{
    long long int n,x,sum,diff,max,min;
    while(scanf("%lld",&n)==1 && n!=0)
    {
        for(x=1;x<=n;x++)
        {
            scanf("%lld%lld",&sum,&diff);
            if(sum>=diff && (sum-diff)%2==0 &&diff>-1)
            {
                /// from uDebug it's clear that output for set
                ///like(41 20 , 31 10 or 40 21, 30 11) is 'impossible'
                ///thats why both value for 'sum' and 'diff' should both be 'even' or 'odd' number
                ///so that their difference (sum-diff) doesn't be 'odd' number
                ///neither value of 'max' would be a 'fraction number'
                ///'max' is the number of maximum score and never score is possible to be a fraction
                ///when they both are 'even' or 'odd' , value of (sum-diff)= is also 'even'
                ///and value of 'max' will also be even
                ///so the condition has to be (sum-diff)%2==0
                max=0;min=0;
                max=(sum+diff)/2;
                min=max-diff;
                printf("%lld %lld\n",max,min);
            }
            else printf("impossible\n");
        }
    }
    return 0;
}
