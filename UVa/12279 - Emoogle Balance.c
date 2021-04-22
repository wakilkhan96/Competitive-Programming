#include<stdio.h>
int main()
{
    int n,x,y,case_num=1,count;
    while(scanf("%d",&n)==1 && n!=0)
    {
        int num[n];
        count=0;
        for(x=0;x<n;x++)
        {
            scanf("%d",&num[x]);
            if(num[x]==0)count++;
        }
        printf("Case %d: %d\n",case_num,(n-count)-count);
        case_num++;
    }
    return 0;
}
