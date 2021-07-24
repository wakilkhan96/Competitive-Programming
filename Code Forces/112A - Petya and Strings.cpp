#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int l,w,x,y,z;
    char s1[200],s2[200];
    gets(s1);
    gets(s2);
    l=strlen(s1);
    y=z=0;
    for(x=0;x<l;x++)
    {
        if(s1[x]>='A' && s1[x]<='Z')s1[x]+=32;
        if(s2[x]>='A' && s2[x]<='Z')s2[x]+=32;
        if(s1[x] == s2[x])y=z=0;
        else if(s1[x]>s2[x])
        {
            y=1;break;
        }
        else if(s1[x]<s2[x])
        {
            z=1;break;
        }
    }
    if(y==z)printf("0\n");
    else if(y>z)printf("1\n");
    else if(y<z)printf("-1\n");
    return 0;
}