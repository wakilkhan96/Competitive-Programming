#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int l,x,base,reminder;
    char number[1000];
    while(scanf("%s",number)==1)
    {
        if(strcmp(number,"0")==0)return 0;
        l=strlen(number);
        reminder=0;
        for(x=0;x<l;x++)
        {
            base=(reminder*10)+(number[x]-'0');
            reminder=base%17;
        }
        if(reminder==0)printf("1\n");
        else printf("0\n");
    }
    return 0;
}
