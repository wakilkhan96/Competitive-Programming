#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define limit 10000002

bool num[limit];

void go()
{


    memset (num, true, sizeof(num));

    num [0] = num [1] = false;

    for ( int i = 4; i < limit; i += 2 )num [i] = false;

    for ( int i = 3; i * i <= limit; i += 2 )
    {
        if ( num [i] )
        {
            for ( int j = i * i; j < limit; j += 2 * i )
                num [j] = false;
        }
    }


    //for(ll x=0;x<50;x++)if(num[x]==0)printf("%lld ",x);

}


int main ()
{
    ll x,y,z,n;

    go();

    while(scanf("%lld",&n)==1)
    {
        if(n<8)printf("Impossible.\n");
        else
        {
            if(n%2==0)
            {
                printf("2 2 ");
                n-=(2+2);
            }
            else
            {
                printf("2 3 ");
                n-=(2+3);
            }

            bool got =false;
            for(x=2;x<limit;x++)
            {
                if(num[x]==true && n-x>0 && num[abs(n-x)]==true)
                {
                    got=true;
                    printf("%lld %lld\n",x,abs(n-x));
                    break;
                }
            }

            if(!got)printf("Impossible.\n");


        }
    }

    return 0;

}
