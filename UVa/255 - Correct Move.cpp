#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
char grid[8][8];
ll ax[64];
ll ay[64];
ll kqx[]={-1,0,0,+1};
ll kqy[]={0,-1,+1,0};
ll valid;
void go()
{
    ll b=0,i,j;
    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
        {
            ax[b]=i;
            ay[b]=j;
            b++;
        }
    }
}

void king(ll x,ll y)
{
    ll _x,_y;
    for(ll z=0;z<4;z++)
    {
        _x=x+kqx[z];
        _y=y+kqy[z];

        if( (_x>=0 && _x<=7) && (_y>=0 && _y<=7) )
        {
            if(grid[_x][_y]=='*')
            {
                grid[_x][_y]='K';
                valid++;
            }
        }
    }
}

void queen(ll x,ll y)
{
    ll _x,_y;
    for(ll z=0;z<4;z++)
    {
        _x=x+kqx[z];
        _y=y+kqy[z];

        while( (_x>=0 && _x<=7) && (_y>=0 && _y<=7) && grid[_x][_y]!='k')
        {
            if(grid[_x][_y]=='*')grid[_x][_y]='Q';
            else if(grid[_x][_y]=='K')grid[_x][_y]='@';

            _x+=kqx[z];
            _y+=kqy[z];
        }
    }
}


int main()
{
    ll x,y,z,n,k,q,_q,x1,x2,y1,y2;
    go();

    while(cin>>k>>q>>_q)
    {
        ///cout<<ax[k]<<","<<ay[k]<<endl;
        ///cout<<ax[q]<<","<<ay[q]<<endl;
        if(k==q)
        {
            printf("Illegal state\n");
            continue;
        }

        for(x=0;x<8;x++)
        {
            for(y=0;y<8;y++)grid[x][y]='*';
        }

        x1=ax[k];y1=ay[k];
        x2=ax[q];y2=ay[q];

        grid[x1][y1]='k';
        grid[x2][y2]='q';

        king(x1,y1);
        queen(x2,y2);

        ll t_x=ax[_q];
        ll t_y=ay[_q];
        if(grid[t_x][t_y]=='@')
        {
            printf("Move not allowed\n");
            continue;
        }
        else if(grid[t_x][t_y]!='Q')
        {
            printf("Illegal move\n");
            continue;
        }

        for(x=0;x<8;x++)
        {
            for(y=0;y<8;y++)grid[x][y]='*';
        }

        valid=0;
        grid[x1][y1]='k';
        grid[t_x][t_y]='q';


        queen(t_x,t_y);
        king(x1,y1);

        if(valid)printf("Continue\n");
        else printf("Stop\n");

        /*for(x=0;x<8;x++)
        {
            for(y=0;y<8;y++)cout<<grid[x][y];
            cout<<endl;
        }*/
    }

    return 0;
}
