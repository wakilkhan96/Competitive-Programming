#include<stdio.h>
#include<math.h>
int main()
{
    long long int n,w,x,y,count,diff;
    while(scanf("%lld",&n)==1 && n!=0)
    {
        long long int num[n];
        long long int sequence[n-1];
        for(x=0;x<n;x++)
        {
            scanf("%lld",&num[x]);
        }
        count=0;
        for(x=0;x<n-1;x++)
        {
            diff=abs(num[x+1]-num[x]);
            sequence[x]=diff;
        }
        for(y=0;y<n-1;y++)
        {
            for(x=0;x<n-2;x++)
            {
                if(sequence[x+1]<sequence[x])
                {
                    w=sequence[x+1];
                    sequence[x+1]=sequence[x];
                    sequence[x]=w;
                }
            }
        }
        if(n!=1)
        {
            for(x=0;x<n-1;x++)
            {
                if(sequence[x]==x+1) count=0;
                else
                {
                    count++;
                    goto before_end;
                }
            }
        }
        else count=0;

            before_end:
            if(count==0)printf("Jolly\n");
            else printf("Not jolly\n");
    }
    return 0;
}
