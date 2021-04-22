#include<bits/stdc++.h>
using namespace std;
#define get(hh,mm) scanf("%lld:%lld",&hh,&mm)
#define _set(x) memset(x,0,sizeof(x))
typedef long long ll;
ll ara[4];
int main()
{
    ll n,x,y,z,hh,mm,num,temp;
    while(cin>>n)
    {
        while(n--)
        {
            get(hh,mm);
            _set(ara);
            num=0;
            bool n_pal=true;
            while(n_pal)
            {
                ++mm;
                if(mm==60)
                {
                    if(hh==23)
                    {
                        hh=0;mm=0;
                    }
                    else
                    {
                        hh++;mm=0;
                    }
                    //printf("temp---");
                    //printf("%02lld:%02lld\n",hh,mm);
                }
                num=hh*100 + mm;
                if(!num)n_pal=false;
                else
                {
                    temp=num;x=0;
                    while(temp)
                    {
                        ara[x++]=temp%10;
                        temp/=10;
                    }
                    bool checker=true;
                    ll mid=x/2;
                    for(ll i=0,j=x-1; i<mid && checker ;i++,j--)
                    {
                        if(ara[i]!=ara[j])checker=false;
                    }
                    if(checker)n_pal=false;
                }
            }
            //for(ll i=0;i<x;i++)cout<<ara[i];
            printf("%02lld:%02lld\n",hh,mm);
            //cout<<num;

        }
    }
    return 0;
}
