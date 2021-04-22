#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,x,y;
    char sentence[200],temp[200];
    while(gets(sentence))
    {
        if(strcmp(sentence,"DONE")==0)break;
        l=strlen(sentence);
        y=0;
        for(x=0;x<l;x++)
        {
            if((sentence[x]>='a' && sentence[x]<='z')||(sentence[x]>='A' && sentence[x]<='Z'))
            {
                if(sentence[x]>='a' && sentence[x]<='z')temp[y++]=sentence[x];
                else temp[y++]=sentence[x]+32;
            }
        }
        temp[y]='\0';
        l=strlen(temp);
        char rev[l];
        strcpy(rev,temp);
        reverse(rev,rev+l);

        if(strcmp(rev,temp)==0)printf("You won't be eaten!\n");
        else printf("Uh oh..\n");
    }
}
