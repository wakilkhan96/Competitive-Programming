#include<bits/stdc++.h>
using namespace std;
int fx[]= {-2,-1, 1, 2, 2,1,-1,-2};
int fy[]= {-1,-2,-2,-1, 1,2, 2, 1};
int d[10][10],visited[10][10];

void BFS(int x1,int y1,int x2,int y2)
{
    int x,y,z;
    pair<int,int>p;
    queue<pair<int,int> >q;
    d[x1][y1]=0;visited[x1][y1]=1;
    q.push(make_pair(x1,y1));
    while(!q.empty())
    {
        p=q.front();
        for(z=0;z<8;z++)
        {
            x=p.first+fx[z];
            y=p.second+fy[z];

            if(x>=1 && y>=1 && x<=8 && y<=8 && !visited[x][y])
            {
                visited[x][y]=1;
                d[x][y]=d[p.first][p.second]+1;
                if(visited[x2][y2])break;
                q.push(make_pair(x,y));
            }
        }
        q.pop();
    }
}
int main()
{
    int x1,x2,y1,y2,z;
    string s1,s2;
    while(cin>>s1>>s2)
    {
        x1=s1[0]-'a'+1;
        y1=s1[1]-'0';
        x2=s2[0]-'a'+1;
        y2=s2[1]-'0';
        memset(d,0,sizeof(d));
        memset(visited,0,sizeof(visited));
        BFS(x1,y1,x2,y2);

        cout<<"To get from "<<s1<<" to "<<s2<<" takes "<<d[x2][y2]<<" knight moves."<<endl;
    }
    return 0;
}
