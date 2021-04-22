#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int s,t,m,n,x,y,z,position,num[200];
    char command[20];
    while(scanf("%lld",&t)==1 && t!=0)
    {
        for(s=1;s<=t;s++)
        {
            scanf("%lld",&m);
            position=0;
            for(n=1;n<=m;n++)
            {
                scanf("%s",command);
                if(strcmp(command,"RIGHT")==0)
                {
                    num[n]=1;
                    position+=num[n];
                }
                else if(strcmp(command,"LEFT")==0)
                {
                    num[n]=-1;
                    position+=num[n];
                }
                else if(strcmp(command,"SAME")==0)
                {
                    scanf("%s%lld",&command,&x);
                    num[n]=num[x];
                    position+=num[n];
                }
            }
            printf("%lld\n",position);
        }
    }
    return 0;
}
