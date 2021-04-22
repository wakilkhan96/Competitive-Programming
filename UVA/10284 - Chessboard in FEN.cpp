#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
char grid[8][8];
ll total;

ll Ppx[]={0,0};
ll Ppy[]={-1,+1};

ll rx[]={-1,0,0,+1};
ll ry[]={0,-1,+1,0};

ll bx[]={-1,-1,+1,+1};
ll by[]={-1,+1,+1,-1};

ll kx[]={-1,-1,-1,0,0,+1,+1,+1};
ll ky[]={-1,0,+1,-1,+1,-1,0,+1};

ll qx[]={-1,0,0,+1,-1,-1,+1,+1};
ll qy[]={0,-1,+1,0,-1,+1,+1,-1};

ll knx[]={-2,-2,-1,-1,+1,+1,+2,+2};
ll kny[]={-1,+1,-2,+2,-2,+2,-1,+1};

void pawn(ll x,ll y)
{
    for(ll z=0;z<2;z++)
    {
        ll _x=x+Ppx[z];
        ll _y=y+Ppy[z];
        if ( (_x>=0 && _x<=7) && (_y>=0 && _y<=7) && grid[_x][_y]=='*' )
        {
            grid[_x][_y]='@';total--;
        }
    }
}

void king(ll x,ll y)
{
    for(ll z=0;z<8;z++)
    {
        ll _x=x+kx[z];
        ll _y=y+ky[z];
        if ( (_x>=0 && _x<=7) && (_y>=0 && _y<=7) && grid[_x][_y]=='*' )
        {
            grid[_x][_y]='@';total--;
        }
    }
}

void knight(ll x,ll y)
{
    for(ll z=0;z<8;z++)
    {
        ll _x=x+knx[z];
        ll _y=y+kny[z];
        if ( (_x>=0 && _x<=7) && (_y>=0 && _y<=7) && grid[_x][_y]=='*' )
        {
            grid[_x][_y]='@';total--;
        }
    }
}

void rook(ll x,ll y)
{
    for(ll z=0;z<4;z++)
    {
        ll _x=x+rx[z];
        ll _y=y+ry[z];
        while( (_x>=0 && _x<=7) && (_y>=0 && _y<=7) && (grid[_x][_y]=='*' || grid[_x][_y]=='@') )
        {
            if(grid[_x][_y]=='*'){grid[_x][_y]='@';total--;}
            _x+=rx[z];
            _y+=ry[z];
        }
    }
}

void bishop(ll x,ll y)
{
    for(ll z=0;z<4;z++)
    {
        ll _x=x+bx[z];
        ll _y=y+by[z];
        while( (_x>=0 && _x<=7) && (_y>=0 && _y<=7) && (grid[_x][_y]=='*' || grid[_x][_y]=='@') )
        {
            if(grid[_x][_y]=='*'){grid[_x][_y]='@';total--;}
            _x+=bx[z];
            _y+=by[z];
        }
    }
}

void queen(ll x,ll y)
{
    for(ll z=0;z<8;z++)
    {
        ll _x=x+qx[z];
        ll _y=y+qy[z];
        while( (_x>=0 && _x<=7) && (_y>=0 && _y<=7) && (grid[_x][_y]=='*' || grid[_x][_y]=='@') )
        {
            if(grid[_x][_y]=='*'){grid[_x][_y]='@';total--;}
            _x+=qx[z];
            _y+=qy[z];
        }
    }
}


int main()
{
    ll x,y,z;
    string s;
    while(cin>>s)
    {
        total=64;
        for(x=0;x<8;x++){for(y=0;y<8;y++)grid[x][y]='*';}
        for(x=0,y=0,z=0; x<s.size(); x++)
        {
            if(s[x]=='/'){
                ++y;z=0;
            }
            else
            {
                if(s[x]>='1' && s[x]<='8')z+=s[x]-'0';
                else
                {
                    if( (s[x]>='A' && s[x]<='Z') && s[x]!='P' )s[x]+=32;
                    grid[y][z++]=s[x];
                    total--;
                }
            }
        }


        for(x=0;x<8;x++)
        {
            for(y=0;y<8;y++)
            {

                if(grid[x][y]=='P')
                {
                    Ppx[0]=Ppx[1]= -1;
                    pawn(x,y);
                }
                else if(grid[x][y]=='p')
                {
                    Ppx[0]=Ppx[1]= +1;
                    pawn(x,y);
                }

                else if(grid[x][y]=='k')king(x,y);

                else if(grid[x][y]=='n')knight(x,y);

                else if(grid[x][y]=='r')rook(x,y);

                else if(grid[x][y]=='b')bishop(x,y);

                else if(grid[x][y]=='q')queen(x,y);

            }
        }

        cout<<total<<endl;
    }

    return 0;
}
