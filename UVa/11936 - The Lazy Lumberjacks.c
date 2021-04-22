#include<stdio.h>
int main(int n ,int x)
{
    long long int a,b,c;
    while(scanf("%d",&n)==1 && n>=2 && n<=20)
    {
        for(x=1;x<=n;x++)
            {
                scanf("%lld%lld%lld",&a,&b,&c);
                if(a>=b && a>=c)
                    {
                        if(a<(b+c))printf("OK\n");
                        else printf("Wrong!!\n");
                    }
                else if(b>=a && b>=c)
                    {
                        if(b<(a+c))printf("OK\n");
                        else printf("Wrong!!\n");
                    }
                else if(c>=a && c>=b)
                    {
                        if(c<(a+b))printf("OK\n");
                        else printf("Wrong!!\n");
                    }
            }
    }
    return 0;
}
