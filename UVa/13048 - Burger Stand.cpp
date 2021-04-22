#include<stdio.h>
#include<string.h>

int main()
{
    int l,n,t,x,case_num=1,sum,place[50];
    char road[50];
    while(scanf("%d",&t)==1 && t!=0)
    {
        for(n=1;n<=t;n++)
        {
            scanf("%s",road);
            l=strlen(road);
            for(x=0;x<50;x++)
            {
                place[x]=0;
            }
            for(x=0;x<l;x++)
            {
                if(road[x]=='_')continue;
                else if(road[x]=='D')
                {
                    place[x]=1;
                }
                else if(road[x]=='B')
                {
                    place[x]=1;
                    place[x-1]=1;
                    place[x-2]=1;
                }
                else if(road[x]=='S')
                {
                    place[x]=1;
                    place[x-1]=1;
                    place[x+1]=1;
                }
            }
            sum=0;
            for(x=0;x<l;x++)
            {
                sum+=place[x];
            }

            printf("Case %d: %d\n",case_num,l-sum);
            case_num++;
        }
    }
    return 0;
}
