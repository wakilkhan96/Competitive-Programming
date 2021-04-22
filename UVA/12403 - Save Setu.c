#include<stdio.h>
#include<string.h>
int main()
{
    int l,x,n,t,sum,money;
    char word[100];
    while(scanf("%d",&t)==1)
    {
        sum=0;
        for(n=1;n<=t;n++)
        {
            scanf("%s",word);
            if(strcmp(word,"donate")==0)
            {
                scanf("%d",&money);
                sum+=money;
            }
            else printf("%d\n",sum);
        }
    }
    return 0;
}
