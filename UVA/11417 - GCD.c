#include<stdio.h>
int main()
{
    long long int a,b,c,g,i,j,n,x;
    while(scanf("%lld",&n)==1 && n!=0)
    {
        g=0;
        for(i=1;i<n;i++)
        {
            for(j=i+1;j<=n;j++)
            {
                a=j;b=i;
                while(a%b!=0)
                {
                    c=b;
                    b=a%b;
                    a=c;
                }
                x=b;
                g+=x;
            }
        }
        printf("%lld\n",g);
    }
    return 0;
}

