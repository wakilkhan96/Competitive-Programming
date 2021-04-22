#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,max;
    while(scanf("%d %d",&a,&b)==2 && a+b!=0)
    {
        max=a;
        if(b>max)max=b;
        printf("%d\n",max);
    }
    return 0;
}
