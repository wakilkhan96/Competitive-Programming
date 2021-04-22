#include<stdio.h>
int main()
{
    long long int a,b,c,x,y,case_num;
    while(scanf("%lld",&y)==1)
    {
        case_num=1;
        for(x=1;x<=y;x++)
        {
            scanf("%lld%lld%lld",&a,&b,&c);
            if(a>=b+c || b>=a+c || c>=a+b) printf("Case %lld: Invalid\n",case_num);
            else if(a==b && b==c) printf("Case %lld: Equilateral\n",case_num);
            else if(a==b || a==c || b==c) printf("Case %lld: Isosceles\n",case_num);
            else if(a<=0 || b<=0 || c<=0) printf("Case %lld: Invalid\n",case_num);
            else printf("Case %lld: Scalene\n",case_num);
            case_num++;
        }
    }
    return 0;
}
