#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int m,n,x,y,z;
    while(scanf("%lld %lld",&m,&n)==2 && m+n!=0)
    {
        y=m+n;
        set<int>CD;
        for(x=1;x<=y;x++)
        {
            cin>>z;
            CD.insert(z);
        }
        printf("%lld\n",y-CD.size());
        CD.clear();
    }
    return 0;
}
