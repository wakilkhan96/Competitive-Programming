#include<stdio.h>
int main()
{
    int case_num=0;
    double a=5,b=9,n,w,x,y,z=a/b,temp;
    while(scanf("%lf",&n)==1 && n!=0)
    {
        for(w=1;w<=n;w++)
        {
            scanf("%lf%lf",&x,&y);
            temp=x+y*z;
            printf("Case %d: %.2lf\n",++case_num,temp);
        }
    }
    return 0;
}
