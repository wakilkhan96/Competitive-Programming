#include <stdio.h>
int main()
{
    int m,n,x,y,z;
    while(scanf("%d",&y)==1)
    {
        for(z=1;z<=y;z++)
        {
            scanf("%d%d",&m,&n);
            printf("%d\n",(m/3)*(n/3));
        }
    }
    return 0;
}
/*each one sonar occupies one position in the grid; the sonar
beam controls its own cell and the contiguous cells" that means
1 beam control 3*3 cells .and to find minimum number of sonar
beams just divide the column and row by this minimum number of
column and row control by 1 solar beam (n/3,m/3)
*/
