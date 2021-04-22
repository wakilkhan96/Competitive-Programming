#include<stdio.h>
#include<math.h>
int main()
{
    long long int a,b,x,count,integer_format;
    double double_format,rest;
    while(scanf("%lld%lld",&a,&b)==2 && a!=0 && b>=a)
    {
        count=0;
        for(x=a;x<=b;x++)
        {
            double_format=sqrt(x);
            integer_format=(int)double_format;
            rest=double_format-integer_format;
            if(rest==0)count++;
        }
        printf("%lld\n",count);
    }
    return 0;
}
