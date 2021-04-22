#include<bits/stdc++.h>
using namespace std;
int fun(int a)
{
    int ara[5000],k=0,i,j,t=1;
    while(a!=0)
    {
        ara[k]=a%10;
        a=a/10;
        k++;
    }
    for(i=0;i<k-1;i++)
    {
        for(j=i+1;j<k;j++)
        {
            if(ara[i]==ara[j])
            {
                t=0;break;
            }
        }
        if(t==0)break;
    }
    if(t==0)return 0;
    else return 1;
}

int main()
{
    int i,n,m,count;
    while(scanf("%d %d",&n,&m)==2)
    {
        count=0;
        if(n>m)swap(m,n);
        for(i=n;i<=m;i++)
        {
            if(fun(i)==1)
            {
                count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}

