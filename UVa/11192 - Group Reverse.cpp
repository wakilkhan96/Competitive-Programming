#include<bits/stdc++.h>
#define limit 500
using namespace std;
int main()
{
    long long int l,n,t,w,x,y,z;
    char word[limit],temp[limit];
    while(scanf("%lld",&t)==1)
    {
        if(t==0)break;
        scanf(" ");
        gets(temp);
        l=0;l=strlen(temp);
        n=0;n=l/t;
        x=0;
        for(y=1;y<=t;y++)
        {
            w=y*n;
            for(z=w-1;z>=w-n;z--)
            {
                word[x++]=temp[z];
            }
        }
        word[x]='\0';
        printf("%s\n",word);
    }
    return 0;
}
