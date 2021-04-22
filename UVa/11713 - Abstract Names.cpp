#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int l1,l2,t,x,y,z;
    char s1[100],s2[100];
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%s",s1);
        scanf("%s",s2);
        l1=l2=0;
        l1=strlen(s1);
        l2=strlen(s2);
        if(l1!=l2)
        {
            printf("No\n");
        }
        else
        {
            for(x=0;x<l1;x++)
            {
                if(s1[x]=='A' || s1[x]=='E' || s1[x]=='I' || s1[x]=='O' || s1[x]=='U')continue;
                if(s1[x]=='a' || s1[x]=='e' || s1[x]=='i' || s1[x]=='o' || s1[x]=='u')continue;

                if(s1[x]!=s2[x])
                {
                    printf("No\n");goto end;
                }
            }
            printf("Yes\n");
        }
        end:
            printf("");
    }
    return 0;
}
