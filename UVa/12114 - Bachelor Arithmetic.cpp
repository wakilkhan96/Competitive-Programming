#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b,s,x=1;
    while(scanf("%d %d",&b,&s)==2)
    {
        if(b==0 && s==0)break;
        else if(b==1||b==0)printf("Case %d: :-\\\n",x++);
        else if(s>=b)printf("Case %d: :-|\n",x++);
        else if(b>s)printf("Case %d: :-(\n",x++);
    }
    return 0;
}
