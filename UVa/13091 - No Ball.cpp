#include<bits/stdc++.h>
using namespace std;
char grid[5][5];
int main()
{
    long long int t,n,x,y,line,pos,row,count=1;
    scanf("%lld",&t);
    while(t--)
    {
        for(x=0;x<5;x++)
        {
            for(y=0;y<5;y++)
            {
                scanf(" %c",&grid[x][y]);
                if(x==0 && grid[x][y]=='|')line=y;
                if(grid[x][y]=='<' || grid[x][y]=='>')
                {
                    row=x;pos=y;
                }
            }
        }

        printf("Case %lld: ",count++);
        if(grid[row][pos]=='<')
        {
            if(pos<line)printf("No Ball\n");
            else printf("Thik Ball\n");
        }
        else
        {
            if(pos>line)printf("No Ball\n");
            else printf("Thik Ball\n");
        }
    }
    return 0;
}
