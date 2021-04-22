#include<bits/stdc++.h>
using namespace std;
#define show printf
int main()
{
    static long long int x,y,z,l,l1,l2;
    char s1[2000],s2[2000],temp1[2000],temp2[2000];
    while(gets(temp1))
    {
        gets(temp2);
        l1=strlen(temp1);
        l2=strlen(temp2);
        sort(temp1,temp1+l1);
        sort(temp2,temp2+l2);
        if(l1<=l2){strcpy(s1,temp1);strcpy(s2,temp2);}
        else {strcpy(s2,temp1);strcpy(s1,temp2);}
        l1=strlen(s1);
        l2=strlen(s2);
        for(x=0;x<l1;x++)
        {
            for(y=0;y<l2;y++)
            {
                if(s2[y]=='0')continue;
                if(s1[x]==s2[y])
                {
                    show("%c",s1[x]);
                    s2[y]='0';break;
                }
            }
        }
        printf("\n");
    }
    return 0;
}
