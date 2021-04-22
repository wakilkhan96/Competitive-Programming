#include<bits/stdc++.h>
using namespace std;
vector<int>node[100];
set<int>num;

void BFS(int n,int tlt)
{
    d[n]=0;
    int x,y,z;
    queue<int>q;
    q.push(n);
    while(!q.empty())
    {
        y=q.front();
        for(x=0;x<node[y].size();x++)
        {
            z=node[y][x];
            if(d[y]+1<d[z])
            {
                d[z]=d[y]+1;
                q.push(z);
            }
        }
        q.pop();
    }
}
int main()
{
    int a,b,n,x,y,z;
    while(cin>>n)
    {
        while(n--)
        {
            cin>>a>>b;
            set.insert(a);
            set.insert(b);
            node[a].push_back(b);
            node[b].push_back(a);
        }
        int p,q;
        while(cin>>p>>q)
        {
            if(p+q==0)break;

        }

    }
    return 0;
}
