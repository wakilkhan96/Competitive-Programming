#include <stdio.h>
int main()
{
    long long int x,y,case_num=1,length,width,height;
    while(scanf("%lld",&y)==1)
    {
        for(x=1;x<=y;x++)
        {
            scanf("%lld%lld%lld",&length,&width,&height);
            if(length<=20 && width<=20 && height<=20) printf("Case %lld: good\n",case_num);
            else printf("Case %lld: bad\n",case_num);
            case_num++;
        }
    }
    return 0;
}
