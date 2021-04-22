#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,l,w,h,max,vol,mvol;
    while(scanf("%d",&x)==1 && x!=0)
    {
        l=w=h=vol=max=mvol=0;
        for(y=1;y<=x;y++)
        {
            scanf("%d %d %d",&l,&w,&h);
            vol=l*w*h;
            if(h>max)
            {
                max=h;
                mvol=vol;
            }
            else if(h==max)
            {
                if(mvol<vol)mvol=vol;
            }
        }
        printf("%d\n",mvol);
    }
    return 0;
}
