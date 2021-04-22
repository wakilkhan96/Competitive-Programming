#include <stdio.h>
int main()
{
    long int x,empty,free,rest,cola;
    while(scanf("%d",&x)==1)
    {
        if(x==1)printf("%ld\n",x);
        if(x==2)printf("%ld\n",x+1);
        if(x>=3 && x<=200)
        {
            rest=2;
            cola=x;
            while(rest>1)
            {
                empty=x%3;
                free=x/3;
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
                        x=rest;
                    }
                    if(rest>2)
                    {
                        x=rest;
                    }
                }
            }
        }
    }
    return 0;
}
