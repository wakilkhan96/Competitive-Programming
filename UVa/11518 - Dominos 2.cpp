#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,s,t,n,m,l,x,y,count;
    while(scanf("%d",&t)==1 && t!=0)
    {
        for(s=1;s<=t;s++)
        {
            scanf("%d %d %d",&n,&m,&l);
            //printf("%d %d %d\n",n,m,l);
            int dominos[n+1]={0},con[m][2],z[l];
            //for(x=0;x<n+1;x++)printf("%d ",dominos[x]);
            for(x=0;x<m;x++)
            {
                scanf("%d %d",&con[x][0],&con[x][1]);
            }
            /*for(x=0;x<m;x++)
            {
                printf("%d %d\n",con[x][0],con[x][1]);
            }*/
            for(x=0;x<l;x++)
            {
                scanf("%d",&z[x]);
                c=z[x];dominos[c]=1;
            }
            /*for(x=0;x<l;x++)
            {
                printf("%d\n",z[x]);
            }*/
            //for(x=0;x<n+1;x++)printf("%d ",dominos[x]);
            for(x=0;x<m;x++)
            {
                a=con[x][0];b=con[x][1];
                if(dominos[a]==1)dominos[b]=1;
            }
            for(x=0;x<n+1;x++)printf("%d ",dominos[x]);
            count=0;
            for(x=1;x<n+1;x++)
            {
                if(dominos[x]==1)count+=1;
            }
            printf("%d\n",count);
        }
    }
    return 0;
}
