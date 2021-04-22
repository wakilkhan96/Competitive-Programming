#include<bits/stdc++.h>
using namespace std;
int main()
{
    static long long int x,y;
    long long int num[1000];
    char s[20];
    gets(s);
    while(gets(s))
    {
        x=0;
        if(strcmp(s,"___________")==0)break;
        if(s[1]=='o')x+=128;
        if(s[2]=='o')x+=64;
        if(s[3]=='o')x+=32;
        if(s[4]=='o')x+=16;
        if(s[5]=='o')x+=8;
        if(s[7]=='o')x+=4;
        if(s[8]=='o')x+=2;
        if(s[9]=='o')x+=1;
        num[y++]=x;
        printf("%c",num[y-1]);
    }
    return 0;
}
