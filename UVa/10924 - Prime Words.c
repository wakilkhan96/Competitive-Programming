#include<stdio.h>
#include<string.h>
#define limit 2000
int num[limit];
void dreamliner()
{
    int a,b;
    num[0]=1;
    for(a=2;a<=limit;a++)
    {
        if(num[a]==0)
        {
            for(b=2;a*b<=limit;b++)
            {
                num[a*b]=1;
            }
        }
    }
}

int main()
{
    int x,sum;
    char word[200];
    dreamliner();
    while(gets(word))
    {
        sum=0;
        for(x=0;x<strlen(word);x++)
        {
            if(word[x]>='a' && word[x]<='z') sum+=word[x]-'a'+1;
            if(word[x]>='A' && word[x]<='Z') sum+=word[x]-'A'+27;
        }
        if(num[sum]==0) printf("It is a prime word.\n");
        else printf("It is not a prime word.\n");
    }
    return 0;
}
