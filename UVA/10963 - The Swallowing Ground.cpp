#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;

    cin>>test;
	while (test--)
    {

        int n,a,b;
        cin>>n;
        int ara[n+1];
        for(int x=0;x<n;x++)
        {
            cin>>a>>b;
            ara[x]=abs(a-b);
        }
        bool valid = true;
        for(int x=1;x<n;x++)
        {
            if(ara[x-1]!=ara[x])valid = false;
        }

        if(valid)cout<<"yes"<<endl;
        else cout<<"no"<<endl;

        if(test)cout<<endl;
    }

    return 0;
}
