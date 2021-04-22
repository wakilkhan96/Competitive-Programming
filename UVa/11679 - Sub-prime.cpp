#include<bits/stdc++.h>
using namespace std;

int main()
{
    int b,n;
    int i,j,k;
    int bank[100000];
    while(cin>>b>>n)
    {
        if(b==0 && n==0)break;
        memset(bank,0,sizeof(bank));

        for(int x=0;x<b;x++)cin>>bank[x];
        for(int x=0;x<n;x++)
        {
            cin>>i>>j>>k;
            bank[i-1]-=k;
            bank[j-1]+=k;

            /*cout<<"status ";
            for(int y=0;y<b;y++)
            {
                cout<<bank[y]<<" ";

            }
            cout<<endl;*/
        }
        bool got = false;
        for(int x=0;x<b;x++)
        {
            if(bank[x]<0)got=true;
        }

        if(!got)printf("S\n");
        else printf("N\n");

    }


    return 0;
}

