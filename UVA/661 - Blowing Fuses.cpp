#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n,m,c,a,cou=1;

    while(cin>>n>>m>>c)
    {
        if(n+m+c==0)break;
        int amp[n+1];
        for(int x=0;x<n;x++)cin>>amp[x];

        bool status[n+1];
        memset(status,false,sizeof(status));

        int total=0,_max=0;  bool blown=false;
        for(int x=0;x<m;x++)
        {
            cin>>a;
            if(status[a-1])
            {
                status[a-1]=false;
                total-=amp[a-1];
            }
            else if(!status[a-1])
            {
                status[a-1]=true;
                total+=amp[a-1];
            }

            if(total<0)total=0;

            if(total>c)
            {
                blown=true;
            }

            //cout<<"total = "<<total<<endl;
            if(total>_max)_max=total;

        }

        printf("Sequence %d\n",cou);

        if(blown)
        {
            printf("Fuse was blown.\n");
        }
        else
        {
            printf("Fuse was not blown.\n");
            printf("Maximal power consumption was %d amperes.\n",_max);
        }

        cout<<endl;
        cou++;

    }

    return 0;
}
