#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,x,y,z;
    char word[10];
    while(scanf("%d ",&z)==1)
    {
        for(y=1;y<=z;y++)
        {
            gets(word);
            l=strlen(word);
            if(l==5)printf("3\n");
            else if(word[0]=='t' && word[1]=='w')printf("2\n");
            else if(word[0]=='t' && word[2]=='o')printf("2\n");
            else if(word[1]=='w' && word[2]=='o')printf("2\n");
            else printf("1\n");
        }
    }
    return 0;
}
