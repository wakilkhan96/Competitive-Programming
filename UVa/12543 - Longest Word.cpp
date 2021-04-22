#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int w,x,y,l=0,max=0,count;
    char word[100],longest[100],answer[100];
    while(1)
    {
        start:
        scanf("%s",word);
        if(strcmp(word,"E-N-D")==0)break;
        l=strlen(word);
        if(l>max)
        {
            for(x=0;x<l;x++)
            {
                if(word[x]=='0')goto start;else if(word[x]=='1')goto start;
                else if(word[x]=='2')goto start;else if(word[x]=='3')goto start;
                else if(word[x]=='4')goto start;else if(word[x]=='5')goto start;
                else if(word[x]=='6')goto start;else if(word[x]=='7')goto start;
                else if(word[x]=='8')goto start;else if(word[x]=='9')goto start;
            }
            strcpy(longest,word);
            max=l;
        }
    }
    y=0;
    for(x=0;x<max;x++)
    {
        if((longest[x]>='a' && longest[x]<='z')||(longest[x]>='A' && longest[x]<='Z')||longest[x]=='-')
        {
            if(longest[x]>='A' && longest[x]<='Z')
            {
                w=0;
                w=longest[x]+32;
                longest[x]=w;
            }

            answer[y++]=longest[x];
        }
    }
    answer[y]='\0';

    printf("%s\n",answer);
    return 0;
}
