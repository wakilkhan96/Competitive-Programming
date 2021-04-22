#include<stdio.h>
#include<string.h>
int main()
{
    int x,y,rem,sum,a_value,b_value;
    double u,v,result;
    char a[24],b[24];
    while(gets(a))
    {
        gets(b);
        a_value=0;
        for(x=0;x<strlen(a);x++)
        {
            if(a[x]>='A' && a[x]<='Z') a_value+=a[x]-64;
            else if(a[x]>='a' && a[x]<='z') a_value+=a[x]-96;
            else a_value+=0;
        }
        while(a_value!=0)
        {
            sum=0;
            while(a_value!=0)
            {
                rem=a_value%10;
                a_value=a_value/10;
                sum=sum+rem;
            }
            if(sum>9) a_value=sum;
        }
        u=sum;

        b_value=0;
        for(x=0;x<strlen(b);x++)
        {
            if(b[x]>='A' && b[x]<='Z') b_value+=b[x]-'A'+1;
            if(b[x]>='a' && b[x]<='z') b_value+=b[x]-'a'+1;
        }
        while(b_value!=0)
        {
            sum=0;
            while(b_value!=0)
            {
                rem=b_value%10;
                b_value=b_value/10;
                sum=sum+rem;
            }
            if(sum>9) b_value=sum;
        }
        v=sum;

        if(u>v)
            result = (v*100)/u;
        else
            result = (u*100)/v;
        printf("%0.2lf %%\n",result);
    }
    return 0;
}
