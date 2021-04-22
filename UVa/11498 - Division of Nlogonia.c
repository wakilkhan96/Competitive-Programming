#include<stdio.h>
int main()
{
    int a,b,m,n,w,x,y,z;
    while(scanf("%d",&w)==1 && w!=0)
    {
        scanf("%d%d",&m,&n);
        for(z=1;z<=w;z++)
        {
            scanf("%d%d",&x,&y);
            a=x-m;
            b=y-n;
            if(a==0 || b==0)printf("divisa\n");
            else if(a>0 && b>0)printf("NE\n");
            else if(a<0 && b>0)printf("NO\n");
            else if(a<0 && b<0)printf("SO\n");
            else if(a>0 && b<0)printf("SE\n");
        }
    }
    return 0;
}
