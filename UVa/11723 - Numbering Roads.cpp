#include<bits/stdc++.h>
using namespace std;
int main()
{
    double r,m,n,x;
    long long int i,count=1;
    while(scanf("%lf %lf",&r,&n)==2 && r+n!=0)
    {
        m=r-n;
        if(m<0)m=0;
        x=m/n;
        if(int(x)!=x)x++;
        i=x;
        if(i>=0 && i<=26)
        {
            printf("Case %lld: %lld\n",count++,i);
        }
        else printf("Case %lld: impossible\n",count++);
    }
    return 0;
}

/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int x,r,n;
    while(scanf("%lld %lld",&r,&n)==2 && r+n!=0)
    {
        x=r-1/n;
        if(x>=0 && x<=26) printf("impossible\n");
        else printf("%d\n",x);
    }
    return 0;
}
*/
