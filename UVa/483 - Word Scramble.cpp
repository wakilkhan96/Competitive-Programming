#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,x,y,z,count;
    char word[100000];
    while(gets(word))
    {
        l=strlen(word);
        word[l]=' ';
        z=0;
        for(x=0;x<=l;x++)
        {
            if(word[x]==' ')
            {
                for(y=x-1;y>=z;y--)
                {
                    printf("%c",word[y]);
                }
                if(x!=l)printf(" ");
                z=x+1;
            }
        }
        printf("\n");
    }
    return 0;
}
