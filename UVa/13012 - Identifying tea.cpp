#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y,count;
    while(scanf("%d",&n)==1 && n!=0)
    {
        count=0;
        for(x=0;x<5;x++)
        {
            scanf("%d",&y);
            if(y==n)count++;
        }
        printf("%d\n",count);
    }
    return 0;
}
