#include<bits/stdc++.h>
using namespace std;
int fx[]={0,0,1,1,-1,-1,1,-1};
int fy[]={1,-1,1,-1,1,-1,0,0};
char s[100][1000];
int m,n,counter;

void BFS(int a,int b)
{
    int x,y;
    pair<int,int>p;
    queue<pair<int,int> >q;
    s[a][b]=='*';
    q.push(make_pair(a,b));
    while(!q.empty())
    {
        p=q.front();
        q.pop();
        for(int z=0;z<8;z++)
        {
            int nx=p.first+fx[z];
            int ny=p.second+fy[z];
            if(nx>=0 && ny>=0 && nx<m && ny<n && s[nx][ny]=='@')
            {
                s[nx][ny]='*';
                q.push(make_pair(nx,ny));
            }
        }

    }
}
int main()
{
    int x,y,z;
    while(cin>>m>>n)
    {
        if(m+n==0)break;
        for(x=0;x<m;x++)
        {
            for(y=0;y<n;y++)cin>>s[x][y];
        }
        counter = 0;

        for(x=0;x<m;x++)
        {
            for(y=0;y<n;y++)
            {
                if(s[x][y]=='@')
                {
                    counter++;
                    BFS(x,y);
                }
            }
        }

        cout<<counter<<endl;
    }
    return 0;
}
