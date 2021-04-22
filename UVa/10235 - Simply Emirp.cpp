#include<bits/stdc++.h>
using namespace std;
#define limit 1000000
long long int num[limit];
void dreamliner()
{
    long long int a,b;
    num[0]=1;
    for(a=2;a<=limit;a++)
    {
        if(num[a]==0)
        {
            for(b=2;a*b<=limit;b++)
            {
                num[a*b]=1;
            }
        }
    }
}

int main()
{
    long long int l,x,y,z,sum;
    double d;
    char number[1000],temp[1000];
    dreamliner();
    while(gets(number))
    {
        y=0;z=0;
        l=strlen(number);
        strcpy(temp,number);
        reverse(temp,temp+l);
        d=0;sum=0;
        for(x=0;x<l;x++)
        {
            d+=(number[x]-'0')*pow(10,l-x-1);
        }
        sum=d;
        if(num[sum]==0)y=1;
        d=0;sum=0;
        for(x=0;x<l;x++)
        {
            d+=(number[x]-'0')*pow(10,x);
        }
        sum=d;
        if(num[sum]==0)z=1;

        if(strcmp(number,temp)!=0 && y==1 && z==1)printf("%s is emirp.\n",number);
        else if(y==1)printf("%s is prime.\n",number);
        else printf("%s is not prime.\n",number);
    }
    return 0;
}
