#include <stdio.h>

int main()
{
    int t,n,x,y,z,max,min,num[100];
    while(scanf("%d",&t)==1)
    {
        for(n=1;n<=t;n++)
        {
            scanf("%d",&y);
            for(x=0;x<y;x++)
            {
                scanf("%d",&num[x]);
            }
            min=num[0];
            for(x=0;x<y;x++)
            {
                if(num[x]<min) min=num[x];
            }
            max=num[0];
            for(x=0;x<y;x++)
            {
                if(num[x]>max) max=num[x];
            }

            printf("%d\n",2*(max-min));
        }
    }
    return 0;
}
/*
   as the Long Street is a straight line , where all positions are situated
   and imagined as a shop place . integers are representing the distances of
   those shops.
   from first example....  ' 24...13...89...37 '    we get that, theres 4 shop on
   the straight road which are placed at the distances of 24m ,13m ,89m and 37m.
   as them all distances are only in one straight line so we can start from the
   'lowest' distance and go to the 'highest' distance . as we can represent the
   sequence ' 24...13...89...37 ' as ' 13...24...37...89 '. so Michael have to
   pass the distance between 13m and 89m . and to get to his car have to pass
   the distance 'twice' between 13m and 89m .
   ultimately.... min_distance=2*(89-13)=152m .
*/

