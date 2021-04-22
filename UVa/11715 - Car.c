#include<stdio.h>
#include<math.h>
int main()
{
    int x,case_num=1;
    double a,s,t,u,v;
    while(scanf("%d",&x)==1 && x!=0)
    {
        if(x==1)
        {
            scanf("%lf%lf%lf",&u,&v,&t);
            a=(v-u)/t;
            s=u*t+(a*t*t)/2;
            if(s<0)s=s*-1;
            printf("Case %d: %.3lf %.3lf",case_num,s,a);
        }
        else if(x==2)
        {
            scanf("%lf%lf%lf",&u,&v,&a);
            t=(v-u)/a;
            if(t<0)t=t*-1;
            s=u*t+(a*t*t)/2;
            if(s<0)s=s*-1;
            printf("Case %d: %.3lf %.3lf",case_num,s,t);
        }
        else if(x==3)
        {
            scanf("%lf%lf%lf",&u,&a,&s);
            v=sqrt(u*u+2*a*s);
            t=(v-u)/a;
            if(t<0)t=t*-1;
            printf("Case %d: %.3lf %.3lf",case_num,v,t);
        }
        else if(x==4)
        {
            scanf("%lf%lf%lf",&v,&a,&s);
            u=sqrt(v*v-2*a*s);
            t=(v-u)/a;
            if(t<0)t=t*-1;
            printf("Case %d: %.3lf %.3lf",case_num,u,t);
        }
        printf("\n");
        case_num++;
    }
    return 0;
}
