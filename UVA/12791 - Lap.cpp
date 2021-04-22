#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int x,y,diff,lap;
	while(scanf("%lld%lld",&x,&y)==2)
    {
        lap=0;diff=0;
		diff=y-x;
		lap=y/diff;
		if(y%diff!=0)lap++;
		printf("%lld\n",lap);
	}
	return 0;
}
