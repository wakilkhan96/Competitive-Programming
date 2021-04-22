#include<bits/stdc++.h>
#define get(x) scanf("%lld",&x)
using namespace std;
typedef long long ll;
ll player[1000001];
ll des[101];
void go()
{
    for(ll k=0;k<1000001;k++)player[k]=1;
}

int main()
{
    //freopen("myfile.txt","w",stdout);
    ll p,x,y,z,test,_player,s_l,total,temp,temp1,temp2;
    go();
    while(cin>>test)
    {
        while(test--)
        {
            get(_player);get(s_l);get(total);
            for(x=0;x<101;x++)des[x]=0;
            for(x=0;x<s_l;x++)
            {
                get(temp1);get(temp2);
                des[temp1]=temp2;
            }

            for(x=1,p=1 ;x<=total ;x++)
            {
                get(temp);
                player[p]+=temp;
                if(des[player[p]]>0)player[p]=des[player[p]];
                if(player[p]>=100)
                {
                    player[p]=100;
                    for(x=x+1;x<=total ;x++)get(temp);
                }
                p++;
                if(p>_player)p=1;
            }


            for(x=1; x<_player+1; x++)
            {
                printf("Position of player %lld is %lld.\n",x,player[x]);

                player[x]=1;
            }
        }
    }
    return 0;
}
