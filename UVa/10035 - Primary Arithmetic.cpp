#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,l,l1,l2,x,y,count,carry,sum;
    char num_1[15],num_2[15];
    while(scanf("%s",num_1) && scanf("%s",num_2))
    {
        if(strcmp(num_1,"0")==0 && strcmp(num_2,"0")==0)break;
        l1=strlen(num_1);l2=strlen(num_2);

        char temp[20];
        strcpy(temp,num_1);
        for(x=0;x<l1;x++)
        {
            num_1[x]=temp[l1-1-x];
        }
        num_1[x]='\0';

        strcpy(temp,num_2);
        for(y=0;y<l2;y++)
        {
            num_2[y]=temp[l2-1-y];
        }
        num_2[y]='\0';

        if(l1<l2)
        {
            for(x=l1;x<l2;x++)num_1[x]='0';
            num_1[x]='\0';
        }
        if(l2<l1)
        {
            for(x=l2;x<l1;x++)num_2[x]='0';
            num_2[x]='\0';
        }
        l=strlen(num_1);
        carry=0;count=0;
        for(x=0;x<l;x++)
        {
            a=0;b=0;
            a=num_1[x]-'0';b=num_2[x]-'0';
            sum=0;
            sum=a+b+carry;
            if(sum>9)
            {
                count++;
                carry=1;
            }
            else carry=0;
        }
        if(count==0)printf("No carry operation.\n");
        else if(count==1)printf("%lld carry operation.\n",count);
        else if(count>1)printf("%lld carry operations.\n",count);
    }
    return 0;
}
