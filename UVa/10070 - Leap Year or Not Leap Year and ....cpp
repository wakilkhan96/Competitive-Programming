#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,l,x,count=1,modulas_by_[500];
    char year[1000];
    while(scanf("%s",year)==1)
    {
        l=strlen(year);
        modulas_by_[4]=modulas_by_[15]=modulas_by_[55]=modulas_by_[100]=modulas_by_[400]=0;
        for(x=0;x<l;x++)
        {
            modulas_by_[4]=((modulas_by_[4]*10)+(year[x]-'0'))%4;
            modulas_by_[15]=((modulas_by_[15]*10)+(year[x]-'0'))%15;
            modulas_by_[55]=((modulas_by_[55]*10)+(year[x]-'0'))%55;
            modulas_by_[100]=((modulas_by_[100]*10)+(year[x]-'0'))%100;
            modulas_by_[400]=((modulas_by_[400]*10)+(year[x]-'0'))%400;
        }
        a=b=c=0;
        if(count!=1)printf("\n");
        count++;
        if(modulas_by_[400]==0 || (modulas_by_[4]==0 && modulas_by_[100]!=0))
        {
            a=1;
            printf("This is leap year.\n");
        }
        if(modulas_by_[15]==0)
        {
            b=1;
            printf("This is huluculu festival year.\n");
        }
        if(modulas_by_[55]==0 && a==1)
        {
            c=1;
            printf("This is bulukulu festival year.\n");
        }
        if(a+b+c<1)printf("This is an ordinary year.\n");
    }
    return 0;
}
