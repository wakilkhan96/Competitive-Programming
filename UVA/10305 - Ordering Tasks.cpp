#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll visited[110],i;
vector<ll>node[110];
vector<ll>seq;

void fun(ll p)
{
    visited[p]=1;
    for(ll x=0;x<node[p].size();x++)
    {
        i=node[p][x];
        if(!visited[i])fun(i);
    }
    //printf("%lld ==",p);
    seq.push_back(p);

}


int main()
{
    ll a,b,m,n,x,y,z;
    while(scanf("%lld %lld",&n,&m) && (m+n))
    {
        for(x=0;x<m;x++)
        {
            scanf("%lld %lld",&a,&b);
            node[a].push_back(b);
        }
        memset(visited,0,sizeof(visited));

        for(x=1;x<=n;x++)
        {
            if(!visited[x])fun(x);
        }
        reverse(seq.begin(),seq.end());

        for(x=0;x<n;x++)
        {
            if(x)printf(" ");
            printf("%lld",seq[x]);
        }
        cout<<endl;
        for(x=1;x<=n;x++)node[x].clear();
        seq.clear();

    }

    return 0;
}

