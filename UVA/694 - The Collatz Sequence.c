#include<stdio.h>
int main()
{
    long long int a,n,case_num=1,limit,term;
    while(scanf("%lld%lld",&a,&limit)==2 && a>0 && limit>0)
    {
        term=1;
        n=a;
        while(n>1 && n<=limit)
        {
            if(n%2==0) n=n/2;
            else n=3*n+1;
            if(n>limit) break;
            term++;
        }
        printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n",case_num,a,limit,term);
        case_num++;
    }
    return 0;
}
