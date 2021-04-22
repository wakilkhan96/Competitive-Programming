#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void go(ll r,ll c)
{
    ll t=r*c;
    if(min(r,c)==1)t*=2;
    if(min(r,c)==2 && max(r,c)==3)t=8;
    else if(min(r,c)==2)
    {
        r=max(r,c);
        r=2*( 2*(r/4) + (r%4) );
        t=r*2;
    }
    if(t%2)t++;
    cout<<t/2;
}

int main()
{
    freopen("myfile.txt","w",stdout);
    ll x,y,z,r,c;
    while(cin>>r>>c && r+c!=0)
    {
        go(r,c);
        printf(" knights may be placed on a %lld row %lld column board.\n",r,c);
    }
    return 0;
}

