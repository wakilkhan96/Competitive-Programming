#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool black,white;
ll bkx,bky,wkx,wky;
char grid[8][8];

ll bx[]={-1,-1,+1,+1};
ll by[]={-1,+1,-1,+1};

ll rx[]={-1,0,0,+1};
ll ry[]={0,-1,+1,0};

//ll qx[]={-1,-1,-1,0,0,+1,+1,+1};
//ll qy[]={-1,0,+1,-1,+1,-1,0,+1};

ll knx[]={-2,-2,-1,-1,+1,+1,+2,+2};
ll kny[]={-1,+1,-2,+2,-2,+2,-1,+1};

void bk_knight_pawn_moves( ll x,ll y )
{
    if(grid[x+1][y-1]=='P' || grid[x+1][y+1]=='P')black=true;

    for(ll z=0;z<8 && !black;z++)
    {
        ll _x=x+knx[z];
        ll _y=y+kny[z];
        if ( (_x>=0 && _x<=7) && (_y>=0 && _y<=7) )
        {
            if(grid[_x][_y]=='N')
            {
                black=true;break;
            }
        }
    }
}

void wk_knight_pawn_moves( ll x,ll y )
{
    if(grid[x-1][y-1]=='p' || grid[x-1][y+1]=='p')white=true;

    for(ll z=0;z<8 && !white;z++)
    {
        ll _x=x+knx[z];
        ll _y=y+kny[z];
        if ( (_x>=0 && _x<=7) && (_y>=0 && _y<=7) )
        {
            if(grid[_x][_y]=='n')
            {
                white=true;break;
            }
        }
    }
}

void bk_continious_moves( ll x,ll y )
{
    for(ll z=0;z<4 && !black;z++)
    {
        ll _x=x+bx[z];
        ll _y=y+by[z];
        while( (_x>=0 && _x<=7) && (_y>=0 && _y<=7) )
        {
            if( grid[_x][_y]=='B' || grid[_x][_y]=='Q' )
            {
                black=true;break;
            }
            else if(grid[_x][_y]=='.')
            {
                _x+=bx[z];
                _y+=by[z];
            }
            else break;
        }
    }

    for(ll z=0;z<4 && !black;z++)
    {
        ll _x=x+rx[z];
        ll _y=y+ry[z];
        while( (_x>=0 && _x<=7) && (_y>=0 && _y<=7) )
        {
            if( grid[_x][_y]=='R' || grid[_x][_y]=='Q' )
            {
                black=true;break;
            }
            else if(grid[_x][_y]=='.')
            {
                _x+=rx[z];
                _y+=ry[z];
            }
            else break;
        }
    }
}


void wk_continious_moves( ll x,ll y )
{
    for(ll z=0;z<4 && !white;z++)
    {
        ll _x=x+bx[z];
        ll _y=y+by[z];
        while( (_x>=0 && _x<=7) && (_y>=0 && _y<=7) )
        {
            if(grid[_x][_y]=='b' || grid[_x][_y]=='q' )
            {
                white=true;break;
            }
            else if(grid[_x][_y]=='.')
            {
                _x+=bx[z];
                _y+=by[z];
            }
            else break;
        }
    }

    for(ll z=0;z<4 && !white;z++)
    {
        ll _x=x+rx[z];
        ll _y=y+ry[z];
        while( (_x>=0 && _x<=7) && (_y>=0 && _y<=7) )
        {
            if(grid[_x][_y]=='r' || grid[_x][_y]=='q' )
            {
                white=true;break;
            }
            else if(grid[_x][_y]=='.')
            {
                _x+=rx[z];
                _y+=ry[z];
            }
            else break;
        }
    }
}

int main()
{
    //freopen ("myfile.txt","w",stdout);

    ll total,x,y,z,cou=0;
    char c;
    while(1)
    {
        total=64;
        for(x=0;x<8;x++)
        {
            for(y=0;y<8;y++)
            {
                cin>>c;
                if(c=='.')total--;
                grid[x][y]=c;
                if(c=='k')
                {
                    bkx=x;bky=y;
                }
                if(c=='K')
                {
                    wkx=x;wky=y;
                }
            }
        }
        black=white=false;///

        if(!total)break;

        bk_continious_moves( bkx,bky );
        if(!black)bk_knight_pawn_moves( bkx,bky );

        if(black==false)
        {
            wk_continious_moves( wkx,wky );
            if(!white)wk_knight_pawn_moves( wkx,wky );
        }



        if(black)printf("Game #%lld: black king is in check.\n",++cou);
        else if(white)printf("Game #%lld: white king is in check.\n",++cou);
        else printf("Game #%lld: no king is in check.\n",++cou);
    }

    return 0;
}
