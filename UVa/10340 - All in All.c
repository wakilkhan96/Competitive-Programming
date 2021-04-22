#include<stdio.h>
#include<string.h>
int main()
{
    long long int x,y,la,lb,count,starter;
    char a[1000000],b[1000000];
    while(scanf("%s%s",a,b)==2)
    {
        la=strlen(a);
        lb=strlen(b);
        count=0;
        starter=0;
        for(x=0;x<la;x++)
        {
            for(y=starter;y<lb;y++)
            {
                if(b[y]==a[x])
                {
                    count++;
                    starter++;
                    break;
                }
                starter++;
            }
        }
        if(count==la) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
