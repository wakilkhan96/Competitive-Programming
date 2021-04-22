#include<bits/stdc++.h>
using namespace std;
int f91(int n)
{
    printf("%d\n",n);
    if(n>100)return n-10;
    else return f91(f91(n+11));

}
int main()
{
    long long int n,x,y,z;
    while(scanf("%lld",&x)==1 && x!=0)
    {
        y=f91(x);
        printf("f91(%lld) = %lld\n",x,y);
    }
    return 0;
}

