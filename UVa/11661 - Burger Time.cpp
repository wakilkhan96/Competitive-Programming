#include<bits/stdc++.h>
using namespace std;
#define limit 10000000
int main()
{
    int d,n,x;
    char s[2000001];
    while(cin>>n)
    {
        if(n==0)return 0;
        cin>>s;
        stack<char>a;
        int min=limit;
        x=0;
        while(x<n && s[x]=='.')x++;
        for(d=1;x<n;x++)
        {
            if(s[x]=='Z')
            {
                min=0;break;
            }
            if(!a.empty())
            {
                if(a.top()==s[x])d=1;
                else if(s[x]=='.')d++;
                else
                {
                    if(d<min)min=d;
                    a.pop();
                    a.push(s[x]);
                    d=1;
                }
            }
            else a.push(s[x]);
        }
        cout<<min<<endl;
    }
    return 0;
}
