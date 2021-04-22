#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,x,y,z=0;
    int s[105][105];
    char c;

    while(cin>>m>>n)
    {
        if(m+n==0)break;

        memset(s,0,sizeof(s));
        char g[m][n];
        for(x=0;x<m;x++)
        {
            for(y=0;y<n;y++)
            {
                cin>>c;
                g[x][y]=c;
                if(c=='.')continue;

                if(x-1>=0)
                {
                    if(y-1>=0)s[x-1][y-1]+=1;
                              s[x-1][y]+=1;
                    if(y+1<n)s[x-1][y+1]+=1;
                }
                if(x+1<m)
                {
                    if(y-1>=0)s[x+1][y-1]+=1;
                              s[x+1][y]+=1;
                    if(y+1<n)s[x+1][y+1]+=1;
                }

                if(y-1>=0)s[x][y-1]+=1;
                if(y+1<n)s[x][y+1]+=1;
            }
        }
        if(z)printf("\n");
        printf("Field #%d:\n",++z);
        for(x=0;x<m;x++)
        {
            for(y=0;y<n;y++)
            {
                if(g[x][y]=='*')printf("*");
                else cout<<s[x][y];
                s[x][y]=0;
            }
            cout<<endl;
        }
    }
    return 0;
}
