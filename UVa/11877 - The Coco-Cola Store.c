
#include <stdio.h>
int main()
{
    long int n,empty,free,rest,cola;
    while(scanf("%d",&n)==1)
    {
        if(n>=0 && n<=100)
        {
            if(n==0) break;
            if(n==1)printf("%ld\n",n-1);
            if(n==2)printf("%ld\n",n-1);
            if(n>=3 && n<=100)
            {
                rest=2;
                cola=0;
            while(rest>1)
            {
                empty=n%3;
                free=n/3;
                rest=empty+free;
                cola=cola+free;
                if(rest==1)
                {
                    printf("%ld\n",cola);
                }
                if(rest>1)
                {
                    if(rest==2)
                    {
                        rest++;
                        n=rest;
                    }
                    if(rest>2)
                    {
                        n=rest;
                    }
                }
            }
            }
        }
    }
    return 0;
}
