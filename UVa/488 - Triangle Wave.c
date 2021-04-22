#include<stdio.h>
int main()
{
    long long int a,b,c,d,n,x,y,line;
    while(scanf("%lld",&n)==1)
    {
        for(d=1;d<=n;d++)
        {
            scanf("%lld%lld",&x,&y);
            if(x==0 || y==0) continue;
            for(c=1;c<=y;c++)
            {
                for(line=1;line<=x;line++)
                {
                    for(a=1;a<=line;a++)
                    {
                        printf("%lld",line);
                    }
                    printf("\n");
                }
                for(line=x-1;line>=1;line--)
                {
                    for(a=1;a<=line;a++)
                    {
                        printf("%lld",line);
                    }
                    printf("\n");
                }
                if(d==n && c==y) break;
                printf("\n");
            }
        }
    }
    return 0;
}
