#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,w,x,y,z,day,count=1,warn;
    while(scanf("%d",&n)==1)
    {
        for(x=1;x<=n;x++)
        {
            warn=day=0;
            scanf("%d",&y);
            char s[y];
            for(z=0;z<y;z++)scanf(" %c",&s[z]);
            for(z=0;z<y;z++)
            {
                if(s[z]=='W')warn=0;
                else warn++;
                day++;
                if(warn==3)break;
            }
            if(warn!=3 && day==y)printf("Case %d: Yay! Mighty Rafa persists!",count++);
            else printf("Case %d: %d",count++,day);
            printf("\n");
        }
    }
    return 0;
}
