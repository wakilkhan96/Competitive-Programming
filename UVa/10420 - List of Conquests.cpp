#include <bits/stdc++.h>
using namespace std;
#define limit 100
int main()
{
    int n,x,y,z,count;
    vector<string>s;
    char a[limit],temp[limit];
    cin>>n;
    y=n;
    while(n--)
    {
        scanf("%s",a);
        gets(temp);
        s.push_back(a);
    }
    sort(s.begin(),s.end());
    cout<<s[0]<<" ";
    count=1;
    for(x=1;x<y;x++)
    {
        if(s[x]==s[x-1])count++;
        else
        {
            cout<<count<<endl<<s[x]<<" ";
            count=1;
        }
        if(x==y-1)cout<<count<<endl;
    }
    s.clear();
    return 0;
}
