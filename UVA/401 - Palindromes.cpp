#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int l,x,y,z;
    char word[200],temp[200];
    while(scanf("%s",word)==1)
    {
        y=0;z=0;
        l=strlen(word);
        strcpy(temp,word);
        reverse(temp,temp+l);
        if(strcmp(temp,word)==0)y=1;
        else y=0;
        for(x=0;x<l;x++)
        {
            if(temp[x]=='B'||temp[x]=='C'||temp[x]=='D'||temp[x]=='F'||temp[x]=='G'||temp[x]=='K'||temp[x]=='N')
            {
                temp[x]='+';break;
            }
            else if(temp[x]=='P'||temp[x]=='Q'||temp[x]=='R'||temp[x]=='4'||temp[x]=='6'||temp[x]=='7'||temp[x]=='9')
            {
                temp[x]='+';break;
            }
            else if(temp[x]=='2')temp[x]='S';
            else if(temp[x]=='S')temp[x]='2';
            else if(temp[x]=='3')temp[x]='E';
            else if(temp[x]=='E')temp[x]='3';
            else if(temp[x]=='5')temp[x]='Z';
            else if(temp[x]=='Z')temp[x]='5';
            else if(temp[x]=='J')temp[x]='L';
            else if(temp[x]=='L')temp[x]='J';
        }
        if(strcmp(temp,word)==0)z=1;
        else z=0;

        if(y==0 && z==0)printf("%s -- is not a palindrome.\n",word);
        else if(y==1 && z==0)printf("%s -- is a regular palindrome.\n",word);
        else if(y==0 && z==1)printf("%s -- is a mirrored string.\n",word);
        else if(y==1 && z==1)printf("%s -- is a mirrored palindrome.\n",word);

        printf("\n");
    }
    return 0;
}
