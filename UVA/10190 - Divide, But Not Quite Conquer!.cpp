#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check;
void f(ll x,ll y)
{
    check=false;
    queue<ll>q;
    while(1)
    {
        //cout<<x<<" ";
        q.push(x);
        if((x%y)!=0 || x<2)break;
        x/=y;
    }
    if(x==1)check=true;
    if(!check)printf("Boring!\n");
    else
    {
        while(!q.empty())
        {
            printf("%d",q.front());
            q.pop();
            if(!q.empty())printf(" ");
        }
        printf("\n");
    }
    q.empty();
}
int main()
{
    ll x,y,z;
    while(cin>>x>>y)
    {
        if(x==0 || y==0 || x<y || y==1)printf("Boring!\n");
        else f(x,y);
    }

    return 0;
}
