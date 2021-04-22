#include<bits/stdc++.h>
int main()
{
    long long int l=0,x,count;
    char word[1000];
    while(gets(word))
    {
        count=0;
        l=strlen(word);
        for(x=0;x<l;x++)
        {
            if((word[x]>='a' && word[x]<='z')||(word[x]>='A' && word[x]<='Z'))
            {
                if(word[x+1]>='a' && word[x+1]<='z') continue;
                else if(word[x+1]>='A' && word[x+1]<='Z') continue;
                else count++;
            }
        }
        printf("%lld\n",count);
    }
    return 0;
}
