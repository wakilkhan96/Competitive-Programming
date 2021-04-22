#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int l,w,x,y,z;
    char a,b,word[2000];
    while(gets(word))
    {
        if(strcmp(word,"*")==0)break;
        l=strlen(word);
        if(word[0]>='A' && word[0]<='Z')z=word[0]+32;
        else z=word[0];
        w=1;
        for(x=0;x<l;x++)
        {
            if(word[x]==' ')
            {
                if(word[x+1]>='A' && word[x+1]<='Z')y=word[x+1]+32;
                else y=word[x+1];

                if(y==z)continue;
                else
                {
                    w=0;
                    break;
                }
            }
        }
        if(w==1)printf("Y\n");
        else printf("N\n");
    }
    return 0;
}
