#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll lcm(ll x,ll y,ll xy)
{
    if(x%y==0)
    {
        ll l=xy/y;
        return l;
    }
    return lcm(y,x%y,xy);
}

void go(ll n,ll x,ll cou)
{
    if(x<=n)
    {
        printf("%lld\n",cou);
        return;
    }
    else
    {
        ll g=lcm(n,x,n*x);
        if(g % abs((g/n)-(g/x)) == 0)++cou;
        go(n,x-1,cou);
        if(g % abs((g/n)-(g/x)) == 0)
        {
            if(abs((g/n)-(g/x))>1)g/=abs((g/n)-(g/x));
            printf("1/%lld = 1/%lld + 1/%lld\n",n,g,x);
        }
    }

}

int main()
{
    ll n,x,y,z,cou;
    while(cin>>n)
    {
        cou=0;
        go(n,n*2,cou);
    }
    return 0;
}
