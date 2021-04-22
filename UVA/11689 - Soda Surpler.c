#include <stdio.h>
int main()
{
    int n,t,x,y,owned,empty,free,found,rest,soda;
    while(scanf("%d",&t)==1)
    {
        for(n=1;n<=t;n++)
        {
            scanf("%d%d%d",&owned,&found,&y);
            empty=owned+found;
            x=empty;
            soda=0;
            free=0;
            rest=0;
            while(x>=y)
            {
                free=x/y;
                soda=soda+free;
                rest=x%y;
                rest=rest+free;
                x=rest;
            }
            printf("%d\n",soda);
        }
    }
    return 0;
}
