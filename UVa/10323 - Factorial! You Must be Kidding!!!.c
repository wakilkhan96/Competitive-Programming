#include<stdio.h>
int main()
{
    int n,x;
    unsigned long factorial;
    while(scanf("%d",&n)==1)
    {
        if(n<0 && n%2==0) printf("Underflow!\n");
        else if(n<0 && n%2!=0) printf("Overflow!\n");
        else if(n>=0 && n<=7) printf("Underflow!\n");
        else if(n>=8 && n<=12)
        {
            factorial=1;
            for(x=1;x<=n;x++)
            {
                factorial=factorial*x;
            }
            printf("%lu\n",factorial);
        }
        else if(n==13) printf("6227020800\n");
        else if(n>13) printf("Overflow!\n");
    }
    return 0;
}
