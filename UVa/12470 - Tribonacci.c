#include <stdio.h>
int main()
{
    long long int w,x,y,z,n,count,sum;
    printf("press n-th fibonacchi term number \n");
    while(scanf("%lld",&n)==1 && n>0)
    {
        count=3;
        sum=0;
        x=0;y=1;z=2;
        if(n>3)
        {
            for(w=1;w<=n-3;w++)
            {
                if(sum==0)printf("0 1 2 ");
                sum=x+y+z;
                x=y;
                y=z;
                z=sum;
                count++;
                printf("%lld ",sum);
            }
            printf("\n%lldth triibonacchi term is %lld \n",n,sum);
        }
        else
        {
            if(n==1)printf("0\n%lldth triibonacchi term is 0 \n",n);
            if(n==2)printf("0 1\n%lldth triibonacchi term is 1 \n",n);
            if(n==3)printf("0 1 2\n%lldth triibonacchi term is 2 \n",n);
        }
    }
    return 0;
}
