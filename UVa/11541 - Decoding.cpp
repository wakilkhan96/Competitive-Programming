#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,l,x,y,z,count=1;
    char word[300],c;
    while(scanf("%lld",&t)==1 && t!=0)
    {
        for(n=1;n<=t;n++)
        {
            scanf("%s",word);
            l=strlen(word);
            word[l]='A';z=0;
            printf("Case %lld: ",count++);
            for(x=0;x<l;x++)
            {
                if(word[x]>='A' && word[x]<='Z')
                {
                    c=word[x];
                }
                else
                {
                    z=z*10+word[x]-'0';
                    if(word[x+1]>='A' && word[x+1]<='Z')
                    {
                        for(y=1;y<=z;y++)
                        {
                            printf("%c",c);
                        }
                        z=0;
                    }
                }
            }
            printf("\n");
        }
    }
    return 0;
}
