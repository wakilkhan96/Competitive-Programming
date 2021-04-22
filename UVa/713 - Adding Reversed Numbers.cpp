#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y,z;
    char s1[201],s2[201],c;
    cin>>n;
    while(n--)
    {
        cin>>s1>>s2;
        int l1=strlen(s1);
        int l2=strlen(s2);
        char temp[201]={'0'};
        strcpy(temp,s1);
        if(l2>l1)
        {
            swap(s1,s2);swap(l1,l2);
        }
        if(l1>l2)
        {
            for(x=l2;x<l1;x++)s2[x]='0';
            s2[x]='\0';
        }
        y=0;
        for(x=0;x<l1;x++)
        {
            y+=(s1[x]-'0')+(s2[x]-'0');
            temp[x]=(y%10)+'0';
            y=y/10;
        }
        if(y>0)
        {
            temp[l1]=(y%10)+'0';
            temp[l1+1]='\0';
        }
        else temp[l1]='\0';
        int l=strlen(temp);
        z=0;
        for(x=0;x<l;x++)
        {
            if(z==0 && temp[x]=='0')continue;
            else
            {
                z=1;cout<<temp[x];
            }
        }
        cout<<endl;
    }
    return 0;
}

