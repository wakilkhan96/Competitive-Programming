#include<bits/stdc++.h>
#define limit 1000
using namespace std;
int main()
{
    long long int l,t,u,v,w,x,y,z,carry,num[limit],ans[limit],max=0;
    char num_str[limit],temp[limit];
    while(scanf("%s",num_str)==1)
    {
        if(strcmp(num_str,"0")==0)
        {
            reverse(num,num+max);
            y=0;z=0;
            for(x=0;x<max;x++)
            {
                if(z==0 && num[x]==0)continue;
                else z=1;

                if(z==1)ans[y++]=num[x];
            }
            for(x=0;x<y;x++)
            {
                printf("%lld",num[x]);
            }
            printf("\n");
            return 0;
        }

        l=strlen(num_str);
        if(max<=l)max=l;
        reverse(num_str,num_str+l);
        for(x=0,w=0;x<l;x++,w++)
        {
            z=(num_str[x]-'0')+num[w];
            u=z;
            if(u>9)
            {
                y=w;
                while(u>9)
                {
                    num[y]=u%10;
                    u=(u/10)+num[y+1];
                    if(u<10)
                    {
                        y++;
                        num[y]=u;
                        if(max<=y)max=y+1;
                    }
                    else
                    {
                        y++;
                        if(max<=y)max=y;
                    }
                }
            }
            else num[w]=u;
        }
    }
    return 0;
}
