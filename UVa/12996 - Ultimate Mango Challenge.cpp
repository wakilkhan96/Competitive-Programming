#include<stdio.h>
int main()
{
    int n,t,x,mango_type,mango_given[10],total_limit,mango_limit[10],total_mango=0,case_num=1,count;
    while(scanf("%d",&t)==1 && t!=0)
    {
        for(n=1;n<=t;n++)
        {
            scanf("%d %d",&mango_type,&total_limit);
            total_mango=0;
            for(x=0;x<mango_type;x++)
            {
                scanf("%d",&mango_given[x]);
                total_mango+=mango_given[x];
            }
            for(x=0;x<mango_type;x++)
            {
                scanf("%d",&mango_limit[x]);
            }
            count=0;
            for(x=0;x<mango_type;x++)
            {
                if(mango_limit[x]>=mango_given[x]) count++;
            }
            if(count==mango_type)
                {
                    if(total_mango<=total_limit)printf("Case %d: Yes\n",case_num);
                    else printf("Case %d: No\n",case_num);
                }
            else printf("Case %d: No\n",case_num);
            case_num++;
        }

    }
    return 0;

}
