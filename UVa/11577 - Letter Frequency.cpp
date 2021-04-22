#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,l,max,x,y,num[30];;
    char word[500];
    while(scanf("%lld ",&t)==1 && t!=0)
    {
        for(n=1;n<=t;n++)
        {
            gets(word);
            l=strlen(word);
            for(x=0;x<30;x++)
            {
                num[x]=0;
            }
            for(x=0;x<l;x++)
            {
                if((word[x]>='A' && word[x]<='Z')||(word[x]>='a' && word[x]<='z'))
                {
                    if(word[x]>='A' && word[x]<='Z')y=word[x]-'A'+1;
                    else if(word[x]>='a' && word[x]<='z')y=word[x]-'a'+1;
                    num[y]++;
                }
            }
            max=0;
            for(x=1;x<30;x++)
            {
                if(num[x]>max)max=num[x];
            }
             for(x=1;x<30;x++)
            {
                if(num[x]==max)printf("%c",x+96);
            }
            printf("\n");
        }
    }
    return 0;
}
