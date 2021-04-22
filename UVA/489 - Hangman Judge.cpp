#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,x,y,z,l_word,l_guess,count,count_one,strokes;
    char word[1000],guess[1000];
    while(scanf("%lld",&n)==1 && n!=-1)
    {
        scanf("%s",word);
        scanf("%s",guess);
        l_word=strlen(word);
        l_guess=strlen(guess);
        strokes=0;count=0;
        for(x=0;x<l_guess;x++)
        {
            count_one=0;
            for(y=0;y<l_word;y++)
            {
                if(word[y]==guess[x])
                {
                    word[y]='1';
                    count_one++;
                }
            }
            if(count_one<1)strokes++;
            else count+=count_one;

            if(strokes>=7)break;
        }
        if(count==l_word)printf("Round %lld\nYou win.\n",n);
        else if(strokes>=7)printf("Round %lld\nYou lose.\n",n);
        else printf("Round %lld\nYou chickened out.\n",n);
    }
    return 0;
}
