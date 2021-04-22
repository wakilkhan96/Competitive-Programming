#include<stdio.h>
int main()
{
    int n,k,p,x,y,z,case_num=0;
    while(scanf("%d",&z)==1)
    {
        for(y=1;y<=z;y++)
        {
            scanf("%d%d%d",&n,&k,&p);
            for(x=1;x<=p;x++)
            {
                if(k==n)
                {
                    k=1;
                    continue;
                }
                k++;
            }
            case_num++;
            printf("Case %d: %d\n",case_num,k);
        }
    }
    return 0;
}
