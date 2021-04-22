#include<stdio.h>
#include<string.h>
int main()
{
    int case_num=0,x,y,sum;
    char word[10],breaker;
    while(scanf("%s",word)==1)
    {
        breaker='*';
        y=breaker;
        // calling the ASCII value of '*' as integer to y.
        sum=0;
        for(x=0;x<strlen(word);x++)
        {
            // lets start counting value from 1(a && A) for both upper and lower case letters to 26(z && Z).
            if(word[x]>='a' && word[x]<='z') sum+=word[x]-'a'+1;
            else if(word[x]>='A' && word[x]<='Z') sum+=word[x]-'A'+1;
            else sum+=y;

        }
        if(sum==29) printf("Case %d: Hajj-e-Akbar\n",++case_num);
        if(sum==61) printf("Case %d: Hajj-e-Asghar\n",++case_num);
        if(sum==42) break;
    }
    return 0;
}
