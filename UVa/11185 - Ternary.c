#include<stdio.h>
int main()
{
    long long int x,count,multiple,num,rem,ternary;
    while(scanf("%lld",&num)==1 && num>-1)
    {
        count=0;
        ternary=0;
        x=0;
        while(num!=0)
        {
            rem=num%3;
            num=num/3;
            multiple=1;
            for(x=1;x<=count;x++)
            {
                multiple=multiple*10;
            }
            ternary+=rem*multiple;
            count++;
        }
        printf("%lld\n",ternary);
    }
    return 0;
}
