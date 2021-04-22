#include <stdio.h>
int main()
{
    int A,B,W,T,n,t,x,y,count=1;
    char cricket[100];
    while(scanf("%d",&t)==1)
    {
        for(x=1;x<=t;x++)
        {
            scanf("%d",&n);
            for(y=0;y<n;y++)
            {
                scanf(" %c",&cricket[y]);
            }

            A=0;B=0;W=0;T=0;
            for(y=0;y<n;y++)
            {
                if(cricket[y]=='B') B++;
                else if(cricket[y]=='W') W++;
                else if(cricket[y]=='T') T++;
                else if(cricket[y]=='A') A++;
            }

            if(A==n)
                printf("Case %d: ABANDONED\n",count); /* All matches are abandoned */
            else if(B+A==n)
                printf("Case %d: BANGLAWASH\n",count); /* If Bangladesh won all the matches, except for Abandoned ones */
            else if(W+A==n)
                printf("Case %d: WHITEWASH\n",count); /* If WWW won all the matches, except for Abandoned ones */
            else if(B>W)
                printf("Case %d: BANGLADESH %d - %d\n",count,B,W); /* Bangladesh won more matches then WWW */
            else if(B<W)
                printf("Case %d: WWW %d - %d\n",count,W,B); /* WWW won more matches then Bangladesh */
            else
                printf("Case %d: DRAW %d %d\n",count,B,T); /* Win count for both team is tied */

            count++;
        }
    }
}
