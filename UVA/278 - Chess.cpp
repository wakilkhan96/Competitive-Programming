#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void go(char ch,ll r,ll c)
{
    if(ch=='r')cout<<min(r,c);
    else if(ch=='Q')cout<<min(r,c);
    else if(ch=='K')
    {
        ll t=( (r+1)/2 )*( (c+1)/2 );
        cout<<t;
    }
    else if(ch=='k')
    {
        ///board is minimum 4x4 ///
        ll t=r*c;
        if(t%2)t++;
        cout<<t/2;
    }
    cout<<endl;
}

int main()
{
    ll x,y,z,r,c,test;
    char ch;
    cin>>test;
    while(test--)
    {
        cin>>ch>>r>>c;
        go(ch,r,c);
    }
    return 0;
}
