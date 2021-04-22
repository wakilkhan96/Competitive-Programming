#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,x,y=1,z;
    char c;
    cin>>m;
    while(m--)
    {
        cin>>n;
        vector<char>s;
        for(x=0;x<n;x++)
        {
            cin>>c;
            s.push_back(c);
        }
        int count=0;
        for(x=0;x<n;x++)
        {
            if(s[x]=='#')continue;
            else
            {
                x+=2;count++;
            }
        }
        printf("Case %d: ",y++);
        cout<<count<<endl;
    }
    return 0;
}

