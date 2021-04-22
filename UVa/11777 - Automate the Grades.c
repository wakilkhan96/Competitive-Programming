#include<stdio.h>
int main()
{
    int a,b,c,d,n,t,w,x,y,z,count=1,num,sum;
    while(scanf("%d",&t)==1)
    {
        for(n=1;n<=t;n++)
        {
            sum=0;
            num=0;
            scanf("%d%d%d%d%d%d%d",&a,&b,&c,&d,&x,&y,&z);
            if(x>=z && y>=z) sum=x+y;
            else if(x>=y && z>=y) sum=x+z;
            else if(y>=x && z>=x) sum=y+z;
            sum=sum/2;
            num=a+b+c+d+sum;
            if(num>=90) printf("Case %d: A\n",count);
            else if(num>=80) printf("Case %d: B\n",count);
            else if(num>=70) printf("Case %d: C\n",count);
            else if(num>=60) printf("Case %d: D\n",count);
            else printf("Case %d: F\n",count);

            count++;
        }
    }
    return 0;
}
