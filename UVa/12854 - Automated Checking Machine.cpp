#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,count,num_1[5],num_2[5];
    while(scanf("%d",&num_1[0])==1)
    {
        for(x=1;x<5;x++)
        {
            scanf("%d",&num_1[x]);
        }
        count=0;
        for(x=0;x<5;x++)
        {
            scanf("%d",&num_2[x]);
            if(num_2[x]!=num_1[x])count++;
        }
        if(count==5)printf("Y\n");
        else printf("N\n");
    }
    return 0;
}
