#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,m,n,x,y=0;
    while(scanf("%d %d",&m,&n)==2 && m+n!=0)
    {
        if(y!=0)printf("\n");
        if(m<n)
        {
            a=m;b=n;
        }
        else
        {
            a=n;b=m;
        }
        for(x=a+1;x<=b+1;x++)
        {
            printf("%d\n",x);
        }
        y++;
    }
    return 0;
}
