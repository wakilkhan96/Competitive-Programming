#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define SET(m) memset(m,0,sizeof(m))
ll num[15][15];
ll nx[]={-1,-1,-1,0,0,+1,+1,+1};
ll ny[]={-1,0,+1,-1,+1,-1,0,+1};

int main()
{
    //freopen("myfile.txt","w",stdout);
    ll test,n,x,y,z;
    while(cin>>test && test)
    {
        for(ll k=0;k<test;k++)
        {
            if(k)printf("\n");
            cin>>n;
            char grid[n][n],part[n][n];

            for(x=0;x<n;x++)
            {
                for(y=0;y<n;y++)cin>>grid[x][y];
            }
            ll total=0;
            for(x=0;x<n;x++)
            {
                for(y=0;y<n;y++)
                {
                    cin>>part[x][y];
                    if(part[x][y]=='x' && grid[x][y]=='*')total++;
                }
            }

            SET(num);

            for(x=0;x<n;x++)
            {
                for(y=0;y<n;y++)
                {
                    if(grid[x][y]=='*')
                    {
                        for(ll z=0;z<8;z++)
                        {
                            ll _x=x+nx[z];
                            ll _y=y+ny[z];
                            if( (_x>=0 && _x<=n) && (_y>=0 && _y<=n) )num[_x][_y]+=1;
                        }
                    }
                }
            }
            //printf("total=%lld\n",total);
            for(x=0;x<n;x++)
            {
                for(y=0;y<n;y++)
                {
                    if(part[x][y]=='x')
                    {
                        if(grid[x][y]=='*')printf("*");
                        else printf("%lld",num[x][y]);
                    }
                    else
                    {
                        if(total>0)printf("%c",grid[x][y]);
                        else printf(".");
                    }
                }
                cout<<endl;
            }

        }
    }
    return 0;
}
