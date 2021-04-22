#include<stdio.h>
int main()
{
    int a,b;
    while(scanf("%d%d",&a,&b)==2 && a!=-1 && b!=-1)
    {
        if(a>b)
        {
            if((a-b)>50)
            {
                a=100-a;
                printf("%d\n",a+b);
            }
            else printf("%d\n",a-b);
        }

        else if(a<b)
        {
            if((b-a)>50)
            {
                b=100-b;
                printf("%d\n",a+b);
            }
            else printf("%d\n",b-a);
        }
        else if(a==b) printf("0\n");
    }
    return 0;
}
