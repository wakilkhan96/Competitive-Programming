#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y,z;
    set<string>abc;
    set<string>::iterator it;
    char s[1000];
    while(gets(s))
    {
        int l=strlen(s);
        for(x=0;x<l;x++)
        {
            char temp[1000];
            y=0;
            if((s[x]>='A'&&s[x]<='Z')||(s[x]>='a'&&s[x]<='z'))
            {
                while((s[x]>='A'&&s[x]<='Z')||(s[x]>='a'&&s[x]<='z')||s[x]=='\'')
                {
                    if(s[x]>='A'&&s[x]<='Z')s[x]+=32;
                    temp[y++]=s[x++];
                }
                temp[y]='\0';
                abc.insert(temp);
            }
            else continue;
        }
    }
    for(it=abc.begin();it!=abc.end();it++)cout<<*it<<endl;
    abc.clear();
    return 0;
}
