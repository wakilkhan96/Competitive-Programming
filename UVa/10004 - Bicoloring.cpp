#include<bits/stdc++.h>
using namespace std;
vector<int>node[201];
int colour[201];
bool bicolour;

void BFS(int n)
{
    int x,y,z;
    queue<int>q;
    q.push(n);
    colour[n]=0;
    while(!q.empty())
    {
        y=q.front();
        for(x=0;x<node[y].size();x++)
        {
            z=node[y][x];
            if(colour[z]==-1)
            {
                if(colour[y]==0)colour[z]=1;
                else colour[z]=0;
                q.push(z);
            }
            else if(colour[y]==colour[z])bicolour=false;
        }
        if(bicolour==false)break;
        q.pop();
    }
}
int main()
{
    int m,n,x,y,z,source;
    while(cin>>n)
    {
        if(n==0)break;
        cin>>m;
        for(z=1;z<=m;z++)
        {
            cin>>x>>y;
            node[x].push_back(y);
            node[y].push_back(x);
            if(z==1)source=x;
        }
        memset(colour,-1,sizeof(colour));
        bicolour=true;
        BFS(source);

        if(bicolour)printf("BICOLORABLE.\n");
        else printf("NOT BICOLORABLE.\n");

        for(z=0;z<n;z++)node[z].clear();
    }
    return 0;
}
