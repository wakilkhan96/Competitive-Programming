#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y,z;
    int ara[5];
    while(cin>>n)
    {
        if(n==0)break;
        for(y=0;y<n;y++)
        {
            cin>>ara[0]>>ara[1]>>ara[2]>>ara[3]>>ara[4];
            vector<char>abc;
            for(x=0;x<5;x++)
            {
                if(ara[x]<=127)abc.push_back(65+x);
            }
            if(abc.size()==1)cout<<abc[0]<<endl;
            else cout<<"*"<<endl;
        }
    }
    return 0;
}

