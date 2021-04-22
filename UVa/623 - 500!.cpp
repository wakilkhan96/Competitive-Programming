#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y,z,temp;
    int ara[100000];
    while(scanf("%d",&n)==1)
    {
        ara[0]=1;
        z=0;
        for(x=n;x>=2;x--)
        {
            temp=0;
            for(y=0;y<=z;y++)
            {
                temp=temp+(ara[y]*x);
                ara[y]=temp%10;
                temp/=10;
            }
            while(temp>0)
            {
                ara[++z]=temp%10;
                temp/=10;
            }
        }
        cout<<n<<"!"<<endl;
        for(x=z;x>=0;x--)
        {
            printf("%d",ara[x]);
        }
        cout<<endl;
    }
    return 0;
}
