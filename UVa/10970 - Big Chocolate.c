#include <stdio.h>
int main( long int x ,long int y)
{
    while(scanf("%ld%ld",&x,&y)==2)
    {
        if((x>=1 && x<=300) && (y>=1 && y<=300))
            printf("%ld\n",x*y-1);
    }
    return 0;
}
