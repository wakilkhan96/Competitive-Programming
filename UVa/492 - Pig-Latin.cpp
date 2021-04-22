#include<bits/stdc++.h>
using namespace std;
int main()
{
    static int l,x,y,z;
    char c,s[1000000];
    while(gets(s))
    {
        l=strlen(s);
        for(x=0;x<l;x++)
        {
            if((s[x]>='A'&&s[x]<='Z')||(s[x]>='a'&&s[x]<='z'))
            {
                if(s[x]=='A'||s[x]=='E'||s[x]=='I'||s[x]=='O'||s[x]=='U')printf("%c",s[x]);
                else if(s[x]=='a'||s[x]=='e'||s[x]=='i'||s[x]=='o'||s[x]=='u')printf("%c",s[x]);
                else
                {
                    y=1;c=s[x];
                }
                while((s[x+1]>='A'&&s[x+1]<='Z')||(s[x+1]>='a'&&s[x+1]<='z'))
                {
                    printf("%c",s[x+1]);
                    x++;
                }
                if(y!=0)
                {
                    y=0;printf("%c",c);
                }
                printf("ay");
            }
            else printf("%c",s[x]);
        }
        printf("\n");
    }
    return 0;
}
