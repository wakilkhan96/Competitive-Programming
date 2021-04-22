#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,l,w,x,y=0,z;
    char s[16];
    while(scanf("%d",&z)==1)
    {
        for(n=1;n<=z;n++)
        {
            y=0;
            for(l=1;l<=4;l++)
            {
                scanf("%s",s);
                for(x=0;x<4;x++)
                {
                    if(x%2==0)
                    {
                        w=(s[x]-'0')*2;
                        y+= w%10 + w/10;
                    }
                    else y+=(s[x]-'0');
                }
            }
            if(y%10!=0)cout<<"Invalid"<<endl;
            else cout<<"Valid"<<endl;
        }
    }
    return 0;
}
