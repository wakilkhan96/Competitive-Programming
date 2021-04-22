#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,x,y,max,count=1,num[10];
    char word[10][100];
    while(scanf("%u",&t)==1 && t!=0)
    {
        for(n=1;n<=t;n++)
        {
            max=0;
            for(x=0;x<10;x++)
            {
                scanf("%s %d",&word[x],&num[x]);
                if(num[x]>max)max=num[x];
            }
            printf("Case #%d:\n",count++);
            for(x=0;x<10;x++)
            {
                if(num[x]==max)
                printf("%s\n",word[x]);
            }
        }
    }
    return 0;
}
