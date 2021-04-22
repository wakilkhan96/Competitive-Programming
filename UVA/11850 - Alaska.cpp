#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y,z;
    while(scanf("%d",&n)==1 && n!=0)
    {
        vector<int>num;
        for(x=0;x<n;x++)
        {
            cin>>z;
            num.push_back(z);
        }
        y=num.size();
        sort(num.begin(),num.end());
        for(x=1;x<num.size();x++)
        {
            if(num[x]-num[x-1]>200)
                {num.erase(num.begin()+0);break;}
            if(2*(1422-num[n-1])>200)
                {num.erase(num.begin()+0);break;}
        }
        if(y==num.size())printf("POSSIBLE\n");
        else printf("IMPOSSIBLE\n");
    }
    return 0;
}
