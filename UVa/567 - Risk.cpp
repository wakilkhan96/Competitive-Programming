#include<bits/stdc++.h>
using namespace std;
int d[1000];
vector<int>node[100];

void BFS(int n)
{
    d[n]=0;
    int x,y,z;
    queue<int>alist;
    alist.push(n);
    while(!alist.empty())
    {
        y=alist.front();
        for(x=0;x<node[y].size();x++)
        {
            z=node[y][x];
            if(d[y]+1<d[z])
            {
                d[z]=d[y]+1;
                alist.push(z);
            }
        }
        alist.pop();
    }
}
int main()
{
    int a,b,c,e,n,x,y,z=0,source,ending;
    while(scanf("%d",&b)==1)
    {
        for(x=1;x<=b;x++)
        {
            cin>>a;
            node[1].push_back(a);
            node[a].push_back(1);
        }
        for(x=2;x<=19;x++)
        {
            cin>>e;
            for(y=1;y<=e;y++)
            {
                cin>>a;
                node[x].push_back(a);
                node[a].push_back(x);
            }
        }
        printf("Test Set #%d\n",++z);
        int j;
        cin>>j;
        while(j--)
        {
            cin>>source>>ending;
            for(x=0;x<22;x++)d[x]=1000;
            int p,q;p=source;q=ending;
            if(p>q)swap(p,q);
            BFS(p);

            printf("%2d to %2d: %d\n",source,ending,d[q]);
        }
        printf("\n");
       for(int i=0; i<21; i++)
       {
           node[i].clear();
       }
    }
    return 0;
}

