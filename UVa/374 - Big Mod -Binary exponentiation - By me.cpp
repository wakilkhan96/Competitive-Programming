#include<bits/stdc++.h>
#define show printf
using namespace std;
long long int z;
int MOD(int a,int b)
{
	int res = 1;
	a = a%z;
    while(b>0)
	{
		if(b&1) res = ((res%z)*(a%z))%z; 
		a = ((a%z)*(a%z))%z; 
		b = b/2;
	}
	
	return res;
}

int main()
{
    long long int t,x,y,count=1;
    while(scanf("%lld %lld %lld",&x,&y,&z)==3)
    {
        t=MOD(x,y);
        show("%lld\n",t);
        count++;
    }
    return 0;
}