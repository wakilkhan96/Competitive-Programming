#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    char s[200];
    cin>>n;
    getchar();
    while(n--)
    {
        gets(s);
        //cout<<s<<endl;
        int l=strlen(s);
        stack<char>bracket;
        for(int x=0;x<l;x++)
        {
            if(!bracket.empty()&&(s[x]==')'||s[x]==']'))
            {
                if(s[x]==')'&&bracket.top()=='(')bracket.pop();
                else if(s[x]==']'&&bracket.top()=='[')bracket.pop();
            }
            else bracket.push(s[x]);
        }
        if(bracket.empty())cout<<"Yes"<<endl;
        else cout<<"No"<<endl;

        //bracket.empty();
    }
    return 0;
}
